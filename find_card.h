#ifndef FIND_CARD_H
#define FIND_CARD_H

#include <QMainWindow>
#include <QButtonGroup>
namespace Ui {
class find_card;
}

class find_card : public QMainWindow
{
    Q_OBJECT

public:
    explicit find_card(QWidget *parent = nullptr);
    ~find_card();

    void add_card();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::find_card *ui;
signals:
    void send_msg(QString card,QString begin_date , QString begin_time , QString end_date ,QString end_time ,int i);
};

#endif // FIND_CARD_H
