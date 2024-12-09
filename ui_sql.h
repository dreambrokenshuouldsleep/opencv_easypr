/********************************************************************************
** Form generated from reading UI file 'sql.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQL_H
#define UI_SQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sql
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_back;
    QTableView *tableView;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *sql)
    {
        if (sql->objectName().isEmpty())
            sql->setObjectName(QStringLiteral("sql"));
        sql->resize(800, 480);
        sql->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        centralwidget = new QWidget(sql);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(690, 420, 100, 50));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 800, 400));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 420, 100, 50));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 430, 441, 41));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 18pt \"Arial\";"));
        sql->setCentralWidget(centralwidget);

        retranslateUi(sql);

        QMetaObject::connectSlotsByName(sql);
    } // setupUi

    void retranslateUi(QMainWindow *sql)
    {
        sql->setWindowTitle(QApplication::translate("sql", "MainWindow", 0));
        pushButton_back->setText(QApplication::translate("sql", "\350\277\224\345\233\236", 0));
        pushButton->setText(QApplication::translate("sql", "\346\237\245\350\257\242\345\205\250\351\203\250", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sql: public Ui_sql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQL_H
