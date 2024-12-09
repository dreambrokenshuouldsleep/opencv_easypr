#include "widget.h"
#include "ui_widget.h"

using namespace cv;
using namespace easypr;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    thread = new CameraThread(this);
    time = new QTimer(this);
    sql_ui = new sql(this);
    find_license = new find_card(this);
    flag = 1;
   connect(thread , &CameraThread::send_image ,this ,&Widget::recv_image);
   connect(this , &Widget::run_stop ,thread ,&CameraThread::get_stop);
   thread->start();
   connect(time , &QTimer::timeout, this ,&Widget::set_time );
   connect(this ,&Widget::send_time , sql_ui  ,&sql::recv_time);
   connect(sql_ui , &sql::send_stay ,this , &Widget::recv_stay);
   connect(find_license , &find_card::send_msg , this ,&Widget::recv_card);
   connect(this ,&Widget::send_str , sql_ui ,&sql::recv_card);
   connect(sql_ui , &sql::send_msg , this ,&Widget::sql_back);

   time->start(1000);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::recv_card(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i)
{
   sql_ui->show();
   emit send_str(card ,begin_date,begin_time , end_date ,end_time,i);

}

void Widget::sql_back()
{
   find_license->show();
}

void Widget::recv_image(QImage image)
{
    if(flag == 1)
    {
        if(count > 100 )
        {
            //显示此时时间
            qDebug()<<image.format();//RGB888
            count = 0;

            //车牌识别
            CPlateRecognize pr;
            //不显示识别过程
            pr.setResultShow(false);
            //通过文字 边沿 颜色识别
            pr.setDetectType(PR_DETECT_CMSER|PR_DETECT_COLOR|PR_DETECT_SOBEL);
            //打开生活模式
            pr.setLifemode(true);

            vector<CPlate> plateVec;
            Mat src = Mat(image.height(),image.width(),CV_8UC3,(void *)image.bits(),image.bytesPerLine());

            int result = pr.plateRecognize(src, plateVec);

            QPixmap pix = QPixmap::fromImage(image).scaled(ui->label->size());
            ui->label->setPixmap(pix);

            if(result==0&&!plateVec.empty()){//识别到了车牌
                CPlate plate = plateVec.at(0);//识别到的第一张
                Mat plateMat = plate.getPlateMat();//车牌部分的图像
                RotatedRect rrect = plate.getPlatePos();
                license = plate.getPlateStr();//车牌字符串
                //打印实时车牌信息
                printf("%s\n",license.c_str());
                ui->label_text->setText(license.c_str());
                //保存图片
                QString str = date_time.toString("yyyy-MM-dd-hh-mm-ss");
                str.append(".jpg");
                pix.save(str);
                flag = 0;
            }
            else{
                printf("没有识别到车牌!\n");
                ui->label_text->setText("fail");
            }

        }
        count++;
    }
}

void Widget::set_time()
{
    date_time = QDateTime::currentDateTime();
    date = date_time.toString("yyyy-MM-dd");
    current_time  = date_time.toString("hh:mm:ss");
    QString week = date_time.toString("ddd");
    ui->label_time->setText(date + " "  +  current_time + " "+week);
}


void Widget::on_pushButton_sql_clicked()
{
    find_license->show();
    this->hide();
}

void Widget::on_pushButton_stop_clicked()
{
    //emit run_stop();
}

void Widget::on_pushButton_return_clicked()
{
   flag = 1;
}

void Widget::cal_free(int stay_time)
{
    if(stay_time < 30)
    {
        ui->label_staymoney->setText("0.00元");
    }
    if((stay_time > 30)&&(stay_time < 60))
    {
        ui->label_staymoney->setText("3.00元");
    }
    if((stay_time > 60))
    {
        int hour = stay_time / 60;
        int free = hour * 2 + 3;
        ui->label_staymoney->setText(QString("%1.00元").arg(free));
    }
}

void Widget::on_pushButton_cash_clicked()
{
    emit send_time(license.c_str() ,  date , current_time);
}

void Widget::recv_stay(int free_time,int access)
{
    cal_free(free_time);
    int day = free_time/24/60;
    int hour = free_time/60%24;
    int min = free_time%60;
    ui->label_3->setNum(hour);
    ui->label_staycar->setText(QString("%1天%2时%3分").arg(day).arg(hour).arg(min));
    if(access == 1)
    {
        ui->label_access->setText("出场");
        system("aplay out_1.WAV");
    }
    else {
        ui->label_access->setText("入场");
        system("aplay in_1.WAV");
    }

}
