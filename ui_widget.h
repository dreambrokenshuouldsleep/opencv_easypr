/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cash;
    QPushButton *pushButton_return;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_sql;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_text;
    QLabel *label_time;
    QLabel *label_access;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_staymoney;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_staycar;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 480);
        Widget->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 501, 371));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(540, 340, 241, 121));
        gridLayoutWidget->setMinimumSize(QSize(50, 50));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cash = new QPushButton(gridLayoutWidget);
        pushButton_cash->setObjectName(QStringLiteral("pushButton_cash"));
        pushButton_cash->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(pushButton_cash, 0, 0, 1, 1);

        pushButton_return = new QPushButton(gridLayoutWidget);
        pushButton_return->setObjectName(QStringLiteral("pushButton_return"));
        pushButton_return->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(pushButton_return, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        pushButton_stop = new QPushButton(gridLayoutWidget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(pushButton_stop, 2, 2, 1, 1);

        pushButton_sql = new QPushButton(gridLayoutWidget);
        pushButton_sql->setObjectName(QStringLiteral("pushButton_sql"));
        pushButton_sql->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(pushButton_sql, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        label_text = new QLabel(Widget);
        label_text->setObjectName(QStringLiteral("label_text"));
        label_text->setGeometry(QRect(540, 20, 250, 50));
        label_text->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 81 20pt \"Rockwell Extra Bold\";\n"
"color: rgb(255, 255, 255);"));
        label_text->setAlignment(Qt::AlignCenter);
        label_time = new QLabel(Widget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(20, 410, 491, 41));
        label_time->setStyleSheet(QLatin1String("font: 22pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        label_access = new QLabel(Widget);
        label_access->setObjectName(QStringLiteral("label_access"));
        label_access->setGeometry(QRect(680, 280, 100, 50));
        label_access->setSizeIncrement(QSize(0, 0));
        label_access->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 20pt \"Arial Rounded MT Bold\";\n"
"color: rgb(255, 255, 255);"));
        label_access->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(540, 160, 251, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(15);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        label_staymoney = new QLabel(layoutWidget);
        label_staymoney->setObjectName(QStringLiteral("label_staymoney"));
        label_staymoney->setFont(font);
        label_staymoney->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label_staymoney);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(540, 100, 262, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        label_staycar = new QLabel(layoutWidget1);
        label_staycar->setObjectName(QStringLiteral("label_staycar"));
        label_staycar->setFont(font);
        label_staycar->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_staycar);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 230, 231, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QString());
        pushButton_cash->setText(QApplication::translate("Widget", "\351\200\232\350\277\207", 0));
        pushButton_return->setText(QApplication::translate("Widget", "\351\207\215\346\226\260\350\257\206\345\210\253", 0));
        pushButton_stop->setText(QApplication::translate("Widget", "\347\216\260\351\207\221\346\224\266\350\264\271", 0));
        pushButton_sql->setText(QApplication::translate("Widget", "\350\256\260\345\275\225\346\237\245\350\257\242", 0));
        label_text->setText(QApplication::translate("Widget", "Text", 0));
        label_time->setText(QString());
        label_access->setText(QApplication::translate("Widget", "\345\205\245\345\234\272", 0));
        label_5->setText(QApplication::translate("Widget", "\345\272\224\346\224\266\350\264\271\347\224\250:", 0));
        label_staymoney->setText(QApplication::translate("Widget", "0.00\345\205\203", 0));
        label_2->setText(QApplication::translate("Widget", "\345\201\234\350\275\246\346\227\266\351\225\277:", 0));
        label_staycar->setText(QApplication::translate("Widget", "0\345\244\2510\346\227\2660\345\210\206", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
