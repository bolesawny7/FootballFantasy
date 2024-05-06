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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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
    QPushButton *LeaguesButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *goalkeeperLabel;
    QComboBox *goalkeeperComboBox;
    QWidget *formLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *secondndDefenderLabel;
    QComboBox *secondDefenderComboBox;
    QWidget *formLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *thirdDefenderLabel;
    QComboBox *thirdDefenderComboBox;
    QWidget *formLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *secondMidfielderLabel;
    QComboBox *secondMidfielderComboBox;
    QWidget *formLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *firstMidfielderLabel;
    QComboBox *firststMidfielderComboBox;
    QWidget *formLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *attackerLabel;
    QComboBox *attackerComboBox;
    QPushButton *save;
    QWidget *formLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstDefenderLabel;
    QComboBox *firstDefenderComboBox;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout;
    QLabel *fantasyTeamNameLabel;
    QLineEdit *fantasyTeamNameLineEdit;

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
        LeaguesButton = new QPushButton(layoutWidget);
        LeaguesButton->setObjectName("LeaguesButton");
        LeaguesButton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(LeaguesButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(pushButton_3);

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

        verticalLayout->addWidget(goalkeeperLabel);

        goalkeeperComboBox = new QComboBox(formLayoutWidget);
        goalkeeperComboBox->setObjectName("goalkeeperComboBox");

        verticalLayout->addWidget(goalkeeperComboBox);

        formLayoutWidget_3 = new QWidget(myteam);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(550, 210, 171, 57));
        verticalLayout_3 = new QVBoxLayout(formLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        secondndDefenderLabel = new QLabel(formLayoutWidget_3);
        secondndDefenderLabel->setObjectName("secondndDefenderLabel");

        verticalLayout_3->addWidget(secondndDefenderLabel);

        secondDefenderComboBox = new QComboBox(formLayoutWidget_3);
        secondDefenderComboBox->setObjectName("secondDefenderComboBox");

        verticalLayout_3->addWidget(secondDefenderComboBox);

        formLayoutWidget_4 = new QWidget(myteam);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(890, 210, 171, 57));
        verticalLayout_4 = new QVBoxLayout(formLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        thirdDefenderLabel = new QLabel(formLayoutWidget_4);
        thirdDefenderLabel->setObjectName("thirdDefenderLabel");

        verticalLayout_4->addWidget(thirdDefenderLabel);

        thirdDefenderComboBox = new QComboBox(formLayoutWidget_4);
        thirdDefenderComboBox->setObjectName("thirdDefenderComboBox");

        verticalLayout_4->addWidget(thirdDefenderComboBox);

        formLayoutWidget_6 = new QWidget(myteam);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(720, 340, 171, 57));
        verticalLayout_6 = new QVBoxLayout(formLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        secondMidfielderLabel = new QLabel(formLayoutWidget_6);
        secondMidfielderLabel->setObjectName("secondMidfielderLabel");

        verticalLayout_6->addWidget(secondMidfielderLabel);

        secondMidfielderComboBox = new QComboBox(formLayoutWidget_6);
        secondMidfielderComboBox->setObjectName("secondMidfielderComboBox");

        verticalLayout_6->addWidget(secondMidfielderComboBox);

        formLayoutWidget_5 = new QWidget(myteam);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(390, 340, 191, 61));
        verticalLayout_5 = new QVBoxLayout(formLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        firstMidfielderLabel = new QLabel(formLayoutWidget_5);
        firstMidfielderLabel->setObjectName("firstMidfielderLabel");

        verticalLayout_5->addWidget(firstMidfielderLabel);

        firststMidfielderComboBox = new QComboBox(formLayoutWidget_5);
        firststMidfielderComboBox->setObjectName("firststMidfielderComboBox");

        verticalLayout_5->addWidget(firststMidfielderComboBox);

        formLayoutWidget_7 = new QWidget(myteam);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(580, 500, 201, 57));
        verticalLayout_7 = new QVBoxLayout(formLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        attackerLabel = new QLabel(formLayoutWidget_7);
        attackerLabel->setObjectName("attackerLabel");

        verticalLayout_7->addWidget(attackerLabel);

        attackerComboBox = new QComboBox(formLayoutWidget_7);
        attackerComboBox->setObjectName("attackerComboBox");

        verticalLayout_7->addWidget(attackerComboBox);

        save = new QPushButton(myteam);
        save->setObjectName("save");
        save->setGeometry(QRect(1180, 70, 83, 29));
        formLayoutWidget_2 = new QWidget(myteam);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(230, 210, 201, 57));
        verticalLayout_2 = new QVBoxLayout(formLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel = new QLabel(formLayoutWidget_2);
        firstDefenderLabel->setObjectName("firstDefenderLabel");

        verticalLayout_2->addWidget(firstDefenderLabel);

        firstDefenderComboBox = new QComboBox(formLayoutWidget_2);
        firstDefenderComboBox->setObjectName("firstDefenderComboBox");

        verticalLayout_2->addWidget(firstDefenderComboBox);

        formLayoutWidget_8 = new QWidget(myteam);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(10, 60, 331, 61));
        formLayout = new QFormLayout(formLayoutWidget_8);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        fantasyTeamNameLabel = new QLabel(formLayoutWidget_8);
        fantasyTeamNameLabel->setObjectName("fantasyTeamNameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, fantasyTeamNameLabel);

        fantasyTeamNameLineEdit = new QLineEdit(formLayoutWidget_8);
        fantasyTeamNameLineEdit->setObjectName("fantasyTeamNameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, fantasyTeamNameLineEdit);


        retranslateUi(myteam);

        QMetaObject::connectSlotsByName(myteam);
    } // setupUi

    void retranslateUi(QDialog *myteam)
    {
        myteam->setWindowTitle(QCoreApplication::translate("myteam", "Dialog", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("myteam", "Leagues", nullptr));
        pushButton_3->setText(QCoreApplication::translate("myteam", "My Team", nullptr));
        pushButton->setText(QCoreApplication::translate("myteam", "Logout", nullptr));
        goalkeeperLabel->setText(QCoreApplication::translate("myteam", "goalkeeper", nullptr));
        secondndDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        thirdDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        secondMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        firstMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        attackerLabel->setText(QCoreApplication::translate("myteam", "attacker", nullptr));
        save->setText(QCoreApplication::translate("myteam", "save team", nullptr));
        firstDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        fantasyTeamNameLabel->setText(QCoreApplication::translate("myteam", "Fantasy Team Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myteam: public Ui_myteam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEAM_H
