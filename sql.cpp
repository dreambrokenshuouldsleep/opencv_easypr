#include "sql.h"
#include "ui_sql.h"

sql::sql(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sql)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if(!db.open()){
            printf("打开数据库失败!\n");
    }
     QString sql = QString("create table if not exists car(license ntext not NULL,in_date ntext not NULL , in_time ntext not NULL,stay_time ntext,out_date ntext,out_time ntext,i int)");
     QSqlQuery query;
     if(!query.exec(sql)){
         this->close();
     }
    model = new QSqlTableModel(this);
    model->setTable("car");
    model->select();
    ui->tableView->setModel(model);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

}

sql::~sql()
{
    db.close();
    delete ui;
}

void sql::on_pushButton_back_clicked()
{
    emit send_msg();
    this->hide();
}

void sql::recv_card(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i)
{
    if(i == 2)
    {
        model->setFilter(QString("license like '%%1'").arg(card));
        model->select();
    }
    else if((card == "0") && (i == 0))
    {
       model->setFilter(QString("(in_date between '%1' and '%2') and (in_time between '%3' and '%4')").arg(begin_date).arg(end_date).arg(begin_time).arg(end_time));
       model->select();
    }
    else if((card == "0") && (i == 1))
    {
        model->setFilter(QString("(out_date between '%1' and '%2') and (out_time between '%3' and '%4')").arg(begin_date).arg(end_date).arg(begin_time).arg(end_time));
        model->select();
    }
    else if(i == 0)
    {
        model->setFilter(QString("(in_date between '%1' and '%2') and (in_time between '%3' and '%4') and (license like '%%5')").arg(begin_date).arg(end_date).arg(begin_time).arg(end_time).arg(card));
        model->select();
    }
    else if(i == 1)
    {
        model->setFilter(QString("(out_date between '%1' and '%2') and (out_time between '%3' and '%4') and (license like '%%5')").arg(begin_date).arg(end_date).arg(begin_time).arg(end_time).arg(card));
        model->select();
    }
}

void sql::recv_time(QString license  , QString date ,QString time)
{
    model->setFilter(QString("license = '%1' and i = '%2' ").arg(license).arg(0));
    model->select();
    if(model->rowCount() == 1)
    {
        model->setData(model->index(0,4) , date);
        model->setData(model->index(0,5) , time);
        model->setData(model->index(0,6) , 1);
        QString in_date = model->data(model->index(0,1)).toString();
        QString in_time = model->data(model->index(0,2)).toString();
        pro_data(in_date, in_time , date, time);
        model->setData(model->index(0,3) , stay);
        model->submitAll();
        return;
    }
    QSqlRecord record = model->record();
    record.setValue("license",license);
    record.setValue("in_date",date);
    record.setValue("in_time",time);
    record.setValue("i" , 0);
    if(!model->insertRecord(-1,record))
    {
        QString error = QString(":%1").arg(model->lastError().text());
        ui->label->setText(error);
        printf("插入失败\n");
    }
    model->submitAll();
    emit send_stay(0,0);
}

void sql::on_pushButton_clicked()
{
    model->setTable("car");
    model->select();
}

void sql::pro_data(QString in_data, QString in_time , QString out_data, QString out_time)
{
    QStringList deal_in_data = in_data.split("-");
    //int in_year = deal_in_data[0].toInt();
    //int in_month = deal_in_data[1].toInt();
    int in_day   = deal_in_data[2].toInt();

    QStringList deal_in_time = in_time.split(":");
    int in_hour = deal_in_time[0].toInt();
    int in_min = deal_in_time[1].toInt();
    int in_sec = deal_in_time[2].toInt();

    QStringList deal_out_data = out_data.split("-");
    //int out_year = deal_out_data[0].toInt();
    //int out_month = deal_out_data[1].toInt();
    int out_day   = deal_out_data[2].toInt();

    QStringList deal_out_time = out_time.split(":");
    int out_hour = deal_out_time[0].toInt();
    int out_min = deal_out_time[1].toInt();
    int out_sec = deal_out_time[2].toInt();

    int day = out_day - in_day;
    int hour = out_hour - in_hour;
    int min = out_min - in_min;
    int sec = out_sec - in_sec;

    int stay_time = day*24*60*60 + hour*60*60 + min*60 + sec;
    //停了多少分钟
    free_time = day*24*60 + hour*60 + min;
    stay = QString("%1天%2时%3分%4秒").arg(stay_time/24/60/60).arg(stay_time/60/60%24).arg(stay_time/60%60).arg(stay_time%60);
    emit send_stay(free_time,1);
}
