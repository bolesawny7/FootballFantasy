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
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(1318, 831);
        Home->setStyleSheet(QString::fromUtf8("Home{\n"
"background-image: url(:/background/fantasy fielde dited.png);\n"
"}\n"
""));
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

        label = new QLabel(Home);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 80, 131, 20));
        pushButton_2 = new QPushButton(Home);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(600, 110, 121, 29));
        label_2 = new QLabel(Home);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 230, 131, 20));
        label_3 = new QLabel(Home);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 230, 131, 20));
        label_4 = new QLabel(Home);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(880, 230, 131, 20));
        label_5 = new QLabel(Home);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 390, 131, 20));
        label_6 = new QLabel(Home);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(720, 390, 131, 20));
        label_7 = new QLabel(Home);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(590, 530, 131, 20));
        pushButton_4 = new QPushButton(Home);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 260, 121, 29));
        pushButton_5 = new QPushButton(Home);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(590, 260, 121, 29));
        pushButton_6 = new QPushButton(Home);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(880, 260, 121, 29));
        pushButton_7 = new QPushButton(Home);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(440, 420, 121, 29));
        pushButton_8 = new QPushButton(Home);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(710, 410, 121, 29));
        pushButton_9 = new QPushButton(Home);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(580, 550, 121, 29));

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Home", "My Team", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("Home", "Transfers", nullptr));
        pushButton->setText(QCoreApplication::translate("Home", "Logout", nullptr));
        label->setText(QCoreApplication::translate("Home", "Goalkeeper Name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Home", "change player", nullptr));
        label_2->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        label_4->setText(QCoreApplication::translate("Home", "Defender Name", nullptr));
        label_5->setText(QCoreApplication::translate("Home", "Midfilder Name", nullptr));
        label_6->setText(QCoreApplication::translate("Home", "Midfilder Name", nullptr));
        label_7->setText(QCoreApplication::translate("Home", "Attacker Name", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Home", "change player", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Home", "change player", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Home", "change player", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Home", "change player", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Home", "change player", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Home", "change player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
