#include "find_card.h"
#include "ui_find_card.h"

find_card::find_card(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::find_card)
{
    ui->setupUi(this);
    add_card();
    QButtonGroup * BtnGroupA = new QButtonGroup;
    BtnGroupA->addButton(ui->radioButton_in,0);
    BtnGroupA->addButton(ui->radioButton_out,1);
    BtnGroupA->setExclusive(true);
    ui->radioButton_in->setChecked(true);
    ui->checkBox_card->setChecked(true);
}

find_card::~find_card()
{
    delete ui;
}

void find_card::on_pushButton_2_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void find_card::on_pushButton_clicked()
{
    QString card = ui->comboBox_card0->currentText() + ui->comboBox_card1->currentText() +ui->comboBox_card2->currentText()+
            ui->comboBox_card3->currentText() +ui->comboBox_card4->currentText() +ui->comboBox_card5->currentText() + ui->comboBox_card6->currentText();
    QString begin_date = QString("%1-%2-%3").arg(ui->comboBox_date1->currentText()).arg(ui->comboBox_date2->currentText()).arg(ui->comboBox_date3->currentText());
    QString begin_time = QString("%1:%2:%3").arg(ui->comboBox_time1->currentText()).arg(ui->comboBox_time2->currentText()).arg(ui->comboBox_time3->currentText());
    QString end_date = QString("%1-%2-%3").arg(ui->comboBox_date12->currentText()).arg(ui->comboBox_date22->currentText()).arg(ui->comboBox_date32->currentText());
    QString end_time = QString("%1:%2:%3").arg(ui->comboBox_time12->currentText()).arg(ui->comboBox_time22->currentText()).arg(ui->comboBox_time32->currentText());
    if((ui->checkBox_card->isChecked())&&(ui->checkBox_time->isChecked()))
    {
        if(ui->radioButton_in->isChecked())
        {
            emit send_msg(card,begin_date,begin_time,end_date,end_time,0);
        }
        else if(ui->radioButton_out->isChecked()){
            emit send_msg(card,begin_date,begin_time,end_date,end_time,1);
        }
    }
    else if(ui->checkBox_card->isChecked())
    {
        emit send_msg(card,"0","0","0","0",2);
    }
    else if(ui->checkBox_time->isChecked())
    {
        if(ui->radioButton_in->isChecked())
        {
            emit send_msg("0" , begin_date, begin_time , end_date, end_time , 0);
        }
        else if(ui->radioButton_out->isChecked()){
            emit send_msg("0" , begin_date, begin_time, end_date , end_time , 1);
        }
    }
    this->hide();
}

void find_card::add_card()
{
        QString temp = "京津黑吉辽冀豫鲁晋陕蒙宁甘新青藏鄂皖苏沪浙闽湘赣川渝贵云粤桂琼港澳台";
        QString temp1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        QString temp2 = "1234567980ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        //车牌插入
        for(int i = 0 ; i < temp.count() ; i++)
        {
            ui->comboBox_card0->addItem(temp.mid(i,1));
        }
        for(int i = 0 ; i < temp1.count() ; i++)
        {
            ui->comboBox_card1->addItem(temp1.mid(i,1));
        }
        for(int i = 0 ; i < temp2.count() ; i++)
        {
            ui->comboBox_card2->addItem(temp2.mid(i,1));
        }
        for(int i = 0 ; i < temp2.count() ; i++)
        {
            ui->comboBox_card3->addItem(temp2.mid(i,1));
        }
        for(int i = 0 ; i < temp2.count() ; i++)
        {
            ui->comboBox_card4->addItem(temp2.mid(i,1));
        }
        for(int i = 0 ; i < temp2.count() ; i++)
        {
            ui->comboBox_card5->addItem(temp2.mid(i,1));
        }
        for(int i = 0 ; i < temp2.count() ; i++)
        {
            ui->comboBox_card6->addItem(temp2.mid(i,1));
        }
        //日期插入
        for(int i = 23 ; i < 80 ; i++)
        {
            ui->comboBox_date1->addItem(QString("20%1").arg(i));
        }
        for(int i = 0 ; i < 13 ; i++)
        {
            ui->comboBox_date2->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 1 ; i < 32 ; i ++)
        {
             ui->comboBox_date3->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        //时间插入
        for(int i = 0 ; i < 24 ; i++)
        {
            ui->comboBox_time1->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 0 ; i < 61 ; i++)
        {
            ui->comboBox_time2->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 0 ; i < 61 ; i++)
        {
            ui->comboBox_time3->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        //日期2插入
        for(int i = 23 ; i < 80 ; i++)
        {
            ui->comboBox_date12->addItem(QString("20%1").arg(i));
        }
        for(int i = 1 ; i < 13 ; i++)
        {
            ui->comboBox_date22->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 1 ; i < 32 ; i ++)
        {
             ui->comboBox_date32->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        //时间2插入
        for(int i = 0 ; i < 24 ; i++)
        {
            ui->comboBox_time12->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 0 ; i < 61 ; i++)
        {
            ui->comboBox_time22->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }
        for(int i = 0 ; i < 61 ; i++)
        {
            ui->comboBox_time32->addItem(QString("%1").arg(i,2,10,QLatin1Char('0')));
        }

}
