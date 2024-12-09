#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "camerathread.h"
#include <QImage>
#include <QDateTime>
#include <opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <easypr.h>
#include <easypr/util/switch.hpp>
#include <QPixmap>
#include <QDebug>
#include <QTimer>
#include "sql.h"
#include "find_card.h"
#include <stdlib.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void cal_free(int stay_time);

private slots:
    void recv_image(QImage image);

    void set_time();

    void on_pushButton_sql_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_cash_clicked();

    void recv_stay(int free_time,int access);

    void recv_card(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i);

    void sql_back();
private:
    Ui::Widget *ui;
    CameraThread * thread;
    quint16 count;
    QDateTime date_time;
    QTimer * time;
    sql * sql_ui;
    find_card * find_license;
    QString date;
    QString current_time;
    string license;
    quint16 flag;
signals:
    void run_stop();
    void send_time(QString license  , QString date ,QString time);
    void send_str(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i);
};
#endif // WIDGET_H
