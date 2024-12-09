#ifndef SQL_H
#define SQL_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QStringList>
namespace Ui {
class sql;
}

class sql : public QMainWindow
{
    Q_OBJECT

public:
    explicit sql(QWidget *parent = nullptr);
    ~sql();

    void pro_data(QString in_data, QString in_time , QString out_data, QString out_time);
public slots:
    void recv_time(QString license  , QString date ,QString time);

    void recv_card(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i);
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_clicked();

private:
    Ui::sql *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
    QString stay;
    int free_time;
signals:
    void send_stay(int free_time,int access);
    void send_msg();
};

#endif // SQL_H
