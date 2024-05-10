/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *LeaguesButton;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *GK;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *DF1;
    QPushButton *pushButton_4;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *DF2;
    QPushButton *pushButton_5;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *DF3;
    QPushButton *pushButton_6;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *MF1;
    QPushButton *pushButton_7;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_6;
    QLabel *MF2;
    QPushButton *pushButton_8;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_7;
    QLabel *ST;
    QPushButton *pushButton_9;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(1318, 831);
        Home->setStyleSheet(QString::fromUtf8("Home{\n"
"background-image: url(:/background/fantasy fielde dited.png);\n"
"}"));
        layoutWidget = new QWidget(Home);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 1311, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(pushButton_3);

        LeaguesButton = new QPushButton(layoutWidget);
        LeaguesButton->setObjectName("LeaguesButton");
        LeaguesButton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(LeaguesButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(pushButton);

        widget = new QWidget(Home);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(590, 80, 122, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        GK = new QLabel(widget);
        GK->setObjectName("GK");
        GK->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(GK);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(Home);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(237, 240, 151, 58));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        DF1 = new QLabel(widget1);
        DF1->setObjectName("DF1");
        DF1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(DF1);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        widget2 = new QWidget(Home);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(547, 230, 191, 58));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        DF2 = new QLabel(widget2);
        DF2->setObjectName("DF2");
        DF2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(DF2);

        pushButton_5 = new QPushButton(widget2);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_3->addWidget(pushButton_5);

        widget3 = new QWidget(Home);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(950, 240, 181, 58));
        verticalLayout_4 = new QVBoxLayout(widget3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        DF3 = new QLabel(widget3);
        DF3->setObjectName("DF3");
        DF3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(DF3);

        pushButton_6 = new QPushButton(widget3);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_4->addWidget(pushButton_6);

        widget4 = new QWidget(Home);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(336, 410, 191, 58));
        verticalLayout_5 = new QVBoxLayout(widget4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        MF1 = new QLabel(widget4);
        MF1->setObjectName("MF1");
        MF1->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(MF1);

        pushButton_7 = new QPushButton(widget4);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout_5->addWidget(pushButton_7);

        widget5 = new QWidget(Home);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(750, 410, 211, 58));
        verticalLayout_6 = new QVBoxLayout(widget5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        MF2 = new QLabel(widget5);
        MF2->setObjectName("MF2");
        MF2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(MF2);

        pushButton_8 = new QPushButton(widget5);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout_6->addWidget(pushButton_8);

        widget6 = new QWidget(Home);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(570, 570, 191, 61));
        verticalLayout_7 = new QVBoxLayout(widget6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        ST = new QLabel(widget6);
        ST->setObjectName("ST");
        ST->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(ST);

        pushButton_9 = new QPushButton(widget6);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout_7->addWidget(pushButton_9);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Home", "My Team", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("Home", "Transfers", nullptr));
        pushButton->setText(QCoreApplication::translate("Home", "Logout", nullptr));
        GK->setText(QCoreApplication::translate("Home", "Goalkeeper Name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Home", "change player", nullptr));
        DF1->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Home", "change player", nullptr));
        DF2->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Home", "change player", nullptr));
        DF3->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Home", "change player", nullptr));
        MF1->setText(QCoreApplication::translate("Home", "Midfilder Name", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Home", "change player", nullptr));
        MF2->setText(QCoreApplication::translate("Home", "Midfilder Name", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Home", "change player", nullptr));
        ST->setText(QCoreApplication::translate("Home", "Attacker Name", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Home", "change player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
