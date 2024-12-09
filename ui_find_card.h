/********************************************************************************
** Form generated from reading UI file 'find_card.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_CARD_H
#define UI_FIND_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_card
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_card;
    QCheckBox *checkBox_time;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_card0;
    QComboBox *comboBox_card1;
    QComboBox *comboBox_card2;
    QComboBox *comboBox_card3;
    QComboBox *comboBox_card4;
    QComboBox *comboBox_card5;
    QComboBox *comboBox_card6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_date12;
    QComboBox *comboBox_date22;
    QComboBox *comboBox_date32;
    QComboBox *comboBox_time12;
    QComboBox *comboBox_time22;
    QComboBox *comboBox_time32;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_date1;
    QComboBox *comboBox_date2;
    QComboBox *comboBox_date3;
    QComboBox *comboBox_time1;
    QComboBox *comboBox_time2;
    QComboBox *comboBox_time3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_in;
    QRadioButton *radioButton_out;
    QMenuBar *menubar;

    void setupUi(QMainWindow *find_card)
    {
        if (find_card->objectName().isEmpty())
            find_card->setObjectName(QStringLiteral("find_card"));
        find_card->resize(800, 480);
        find_card->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        centralwidget = new QWidget(find_card);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 290, 93, 47));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_card = new QCheckBox(layoutWidget);
        checkBox_card->setObjectName(QStringLiteral("checkBox_card"));

        verticalLayout->addWidget(checkBox_card);

        checkBox_time = new QCheckBox(layoutWidget);
        checkBox_time->setObjectName(QStringLiteral("checkBox_time"));

        verticalLayout->addWidget(checkBox_time);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 250, 653, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_card0 = new QComboBox(layoutWidget1);
        comboBox_card0->setObjectName(QStringLiteral("comboBox_card0"));

        horizontalLayout->addWidget(comboBox_card0);

        comboBox_card1 = new QComboBox(layoutWidget1);
        comboBox_card1->setObjectName(QStringLiteral("comboBox_card1"));

        horizontalLayout->addWidget(comboBox_card1);

        comboBox_card2 = new QComboBox(layoutWidget1);
        comboBox_card2->setObjectName(QStringLiteral("comboBox_card2"));

        horizontalLayout->addWidget(comboBox_card2);

        comboBox_card3 = new QComboBox(layoutWidget1);
        comboBox_card3->setObjectName(QStringLiteral("comboBox_card3"));

        horizontalLayout->addWidget(comboBox_card3);

        comboBox_card4 = new QComboBox(layoutWidget1);
        comboBox_card4->setObjectName(QStringLiteral("comboBox_card4"));

        horizontalLayout->addWidget(comboBox_card4);

        comboBox_card5 = new QComboBox(layoutWidget1);
        comboBox_card5->setObjectName(QStringLiteral("comboBox_card5"));

        horizontalLayout->addWidget(comboBox_card5);

        comboBox_card6 = new QComboBox(layoutWidget1);
        comboBox_card6->setObjectName(QStringLiteral("comboBox_card6"));

        horizontalLayout->addWidget(comboBox_card6);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(580, 370, 195, 52));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(pushButton_2);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(410, 40, 381, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox_date12 = new QComboBox(layoutWidget_2);
        comboBox_date12->setObjectName(QStringLiteral("comboBox_date12"));
        comboBox_date12->setMinimumSize(QSize(80, 0));

        horizontalLayout_4->addWidget(comboBox_date12);

        comboBox_date22 = new QComboBox(layoutWidget_2);
        comboBox_date22->setObjectName(QStringLiteral("comboBox_date22"));
        comboBox_date22->setMinimumSize(QSize(32, 0));

        horizontalLayout_4->addWidget(comboBox_date22);

        comboBox_date32 = new QComboBox(layoutWidget_2);
        comboBox_date32->setObjectName(QStringLiteral("comboBox_date32"));
        comboBox_date32->setMinimumSize(QSize(32, 0));

        horizontalLayout_4->addWidget(comboBox_date32);

        comboBox_time12 = new QComboBox(layoutWidget_2);
        comboBox_time12->setObjectName(QStringLiteral("comboBox_time12"));
        comboBox_time12->setMinimumSize(QSize(32, 0));

        horizontalLayout_4->addWidget(comboBox_time12);

        comboBox_time22 = new QComboBox(layoutWidget_2);
        comboBox_time22->setObjectName(QStringLiteral("comboBox_time22"));
        comboBox_time22->setMinimumSize(QSize(32, 0));

        horizontalLayout_4->addWidget(comboBox_time22);

        comboBox_time32 = new QComboBox(layoutWidget_2);
        comboBox_time32->setObjectName(QStringLiteral("comboBox_time32"));
        comboBox_time32->setMinimumSize(QSize(32, 0));

        horizontalLayout_4->addWidget(comboBox_time32);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(390, 30, 16, 221));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 361, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 10, 371, 20));
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 381, 23));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_date1 = new QComboBox(widget);
        comboBox_date1->setObjectName(QStringLiteral("comboBox_date1"));
        comboBox_date1->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(comboBox_date1);

        comboBox_date2 = new QComboBox(widget);
        comboBox_date2->setObjectName(QStringLiteral("comboBox_date2"));
        comboBox_date2->setMinimumSize(QSize(32, 0));

        horizontalLayout_3->addWidget(comboBox_date2);

        comboBox_date3 = new QComboBox(widget);
        comboBox_date3->setObjectName(QStringLiteral("comboBox_date3"));
        comboBox_date3->setMinimumSize(QSize(32, 0));

        horizontalLayout_3->addWidget(comboBox_date3);

        comboBox_time1 = new QComboBox(widget);
        comboBox_time1->setObjectName(QStringLiteral("comboBox_time1"));
        comboBox_time1->setMinimumSize(QSize(32, 0));

        horizontalLayout_3->addWidget(comboBox_time1);

        comboBox_time2 = new QComboBox(widget);
        comboBox_time2->setObjectName(QStringLiteral("comboBox_time2"));
        comboBox_time2->setMinimumSize(QSize(32, 0));

        horizontalLayout_3->addWidget(comboBox_time2);

        comboBox_time3 = new QComboBox(widget);
        comboBox_time3->setObjectName(QStringLiteral("comboBox_time3"));
        comboBox_time3->setMinimumSize(QSize(32, 0));

        horizontalLayout_3->addWidget(comboBox_time3);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 70, 119, 47));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_in = new QRadioButton(widget1);
        radioButton_in->setObjectName(QStringLiteral("radioButton_in"));

        verticalLayout_2->addWidget(radioButton_in);

        radioButton_out = new QRadioButton(widget1);
        radioButton_out->setObjectName(QStringLiteral("radioButton_out"));

        verticalLayout_2->addWidget(radioButton_out);

        find_card->setCentralWidget(centralwidget);
        menubar = new QMenuBar(find_card);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        find_card->setMenuBar(menubar);

        retranslateUi(find_card);

        QMetaObject::connectSlotsByName(find_card);
    } // setupUi

    void retranslateUi(QMainWindow *find_card)
    {
        find_card->setWindowTitle(QApplication::translate("find_card", "MainWindow", 0));
        checkBox_card->setText(QApplication::translate("find_card", "\350\275\246\347\211\214\345\217\267", 0));
        checkBox_time->setText(QApplication::translate("find_card", "\346\227\266\351\227\264", 0));
        pushButton->setText(QApplication::translate("find_card", "\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("find_card", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("find_card", "\345\211\215\346\227\266\351\227\264\351\200\211\346\213\251:\345\271\264\346\234\210\346\227\245\346\227\266\345\210\206\347\247\222", 0));
        label_2->setText(QApplication::translate("find_card", "\345\220\216\346\227\266\351\227\264\351\200\211\346\213\251:\345\271\264\346\234\210\346\227\245\346\227\266\345\210\206\347\247\222", 0));
        radioButton_in->setText(QApplication::translate("find_card", "\345\205\245\345\272\223\346\227\266\351\227\264", 0));
        radioButton_out->setText(QApplication::translate("find_card", "\345\207\272\345\272\223\346\227\266\351\227\264", 0));
    } // retranslateUi

};

namespace Ui {
    class find_card: public Ui_find_card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_CARD_H
