/********************************************************************************
** Form generated from reading UI file 'myteam.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTEAM_H
#define UI_MYTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myteam
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *LeaguesButton;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *goalkeeperLabel;
    QLineEdit *pl0;
    QWidget *formLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *secondndDefenderLabel;
    QLineEdit *pl2;
    QWidget *formLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *thirdDefenderLabel;
    QLineEdit *pl3;
    QWidget *formLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *secondMidfielderLabel;
    QLineEdit *pl5;
    QWidget *formLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *firstMidfielderLabel;
    QLineEdit *pl4;
    QWidget *formLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *attackerLabel;
    QLineEdit *pl6;
    QWidget *formLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstDefenderLabel;
    QLineEdit *pl1;

    void setupUi(QDialog *myteam)
    {
        if (myteam->objectName().isEmpty())
            myteam->setObjectName("myteam");
        myteam->resize(1294, 859);
        myteam->setStyleSheet(QString::fromUtf8("myteam{\n"
"	background-image: url(:/background/fantasy fielde dited.png);\n"
"}"));
        layoutWidget = new QWidget(myteam);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 1311, 51));
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

        formLayoutWidget = new QWidget(myteam);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(570, 60, 171, 57));
        verticalLayout = new QVBoxLayout(formLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        goalkeeperLabel = new QLabel(formLayoutWidget);
        goalkeeperLabel->setObjectName("goalkeeperLabel");

        verticalLayout->addWidget(goalkeeperLabel, 0, Qt::AlignHCenter);

        pl0 = new QLineEdit(formLayoutWidget);
        pl0->setObjectName("pl0");

        verticalLayout->addWidget(pl0);

        formLayoutWidget_3 = new QWidget(myteam);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(570, 210, 171, 57));
        verticalLayout_3 = new QVBoxLayout(formLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        secondndDefenderLabel = new QLabel(formLayoutWidget_3);
        secondndDefenderLabel->setObjectName("secondndDefenderLabel");

        verticalLayout_3->addWidget(secondndDefenderLabel, 0, Qt::AlignHCenter);

        pl2 = new QLineEdit(formLayoutWidget_3);
        pl2->setObjectName("pl2");

        verticalLayout_3->addWidget(pl2);

        formLayoutWidget_4 = new QWidget(myteam);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(890, 210, 171, 57));
        verticalLayout_4 = new QVBoxLayout(formLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        thirdDefenderLabel = new QLabel(formLayoutWidget_4);
        thirdDefenderLabel->setObjectName("thirdDefenderLabel");

        verticalLayout_4->addWidget(thirdDefenderLabel, 0, Qt::AlignHCenter);

        pl3 = new QLineEdit(formLayoutWidget_4);
        pl3->setObjectName("pl3");

        verticalLayout_4->addWidget(pl3);

        formLayoutWidget_6 = new QWidget(myteam);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(720, 340, 171, 57));
        verticalLayout_6 = new QVBoxLayout(formLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        secondMidfielderLabel = new QLabel(formLayoutWidget_6);
        secondMidfielderLabel->setObjectName("secondMidfielderLabel");

        verticalLayout_6->addWidget(secondMidfielderLabel, 0, Qt::AlignHCenter);

        pl5 = new QLineEdit(formLayoutWidget_6);
        pl5->setObjectName("pl5");

        verticalLayout_6->addWidget(pl5);

        formLayoutWidget_5 = new QWidget(myteam);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(390, 340, 191, 61));
        verticalLayout_5 = new QVBoxLayout(formLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        firstMidfielderLabel = new QLabel(formLayoutWidget_5);
        firstMidfielderLabel->setObjectName("firstMidfielderLabel");

        verticalLayout_5->addWidget(firstMidfielderLabel, 0, Qt::AlignHCenter);

        pl4 = new QLineEdit(formLayoutWidget_5);
        pl4->setObjectName("pl4");

        verticalLayout_5->addWidget(pl4);

        formLayoutWidget_7 = new QWidget(myteam);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(530, 470, 201, 57));
        verticalLayout_7 = new QVBoxLayout(formLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        attackerLabel = new QLabel(formLayoutWidget_7);
        attackerLabel->setObjectName("attackerLabel");

        verticalLayout_7->addWidget(attackerLabel, 0, Qt::AlignHCenter);

        pl6 = new QLineEdit(formLayoutWidget_7);
        pl6->setObjectName("pl6");

        verticalLayout_7->addWidget(pl6);

        formLayoutWidget_2 = new QWidget(myteam);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(230, 210, 201, 57));
        verticalLayout_2 = new QVBoxLayout(formLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel = new QLabel(formLayoutWidget_2);
        firstDefenderLabel->setObjectName("firstDefenderLabel");

        verticalLayout_2->addWidget(firstDefenderLabel, 0, Qt::AlignHCenter);

        pl1 = new QLineEdit(formLayoutWidget_2);
        pl1->setObjectName("pl1");

        verticalLayout_2->addWidget(pl1);


        retranslateUi(myteam);

        QMetaObject::connectSlotsByName(myteam);
    } // setupUi

    void retranslateUi(QDialog *myteam)
    {
        myteam->setWindowTitle(QCoreApplication::translate("myteam", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("myteam", "My Team", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("myteam", "transfers", nullptr));
        pushButton->setText(QCoreApplication::translate("myteam", "Logout", nullptr));
        goalkeeperLabel->setText(QCoreApplication::translate("myteam", "goalkeeper", nullptr));
        secondndDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        thirdDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        secondMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        firstMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        attackerLabel->setText(QCoreApplication::translate("myteam", "attacker", nullptr));
        firstDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myteam: public Ui_myteam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEAM_H
