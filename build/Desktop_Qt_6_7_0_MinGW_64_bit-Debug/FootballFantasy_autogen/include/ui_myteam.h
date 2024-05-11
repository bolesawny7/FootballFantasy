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
    QLineEdit *pl0points;
    QLineEdit *pl0;
    QWidget *formLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *secondndDefenderLabel;
    QLineEdit *pl2points;
    QLineEdit *pl2;
    QWidget *formLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *thirdDefenderLabel;
    QLineEdit *pl3points;
    QLineEdit *pl3;
    QWidget *formLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *secondMidfielderLabel;
    QLineEdit *pl5points;
    QLineEdit *pl5;
    QWidget *formLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *firstMidfielderLabel;
    QLineEdit *pl4points;
    QLineEdit *pl4;
    QWidget *formLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *attackerLabel;
    QLineEdit *pl6points;
    QLineEdit *pl6;
    QWidget *formLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstDefenderLabel;
    QLineEdit *pl1points;
    QLineEdit *pl1;
    QWidget *formLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *firstDefenderLabel_2;
    QLineEdit *TotalPoints;
    QLineEdit *pl1_2;
    QWidget *formLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *firstDefenderLabel_3;
    QLineEdit *totalPointsName;
    QLineEdit *totalPoints;
    QWidget *formLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *firstDefenderLabel_4;
    QLineEdit *higherGameWeekName;
    QLineEdit *higherGameWeekPoints;

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
        formLayoutWidget->setGeometry(QRect(580, 60, 181, 80));
        verticalLayout = new QVBoxLayout(formLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        goalkeeperLabel = new QLabel(formLayoutWidget);
        goalkeeperLabel->setObjectName("goalkeeperLabel");

        verticalLayout->addWidget(goalkeeperLabel, 0, Qt::AlignHCenter);

        pl0points = new QLineEdit(formLayoutWidget);
        pl0points->setObjectName("pl0points");
        pl0points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl0points->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pl0points);

        pl0 = new QLineEdit(formLayoutWidget);
        pl0->setObjectName("pl0");
        pl0->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl0->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pl0);

        formLayoutWidget_3 = new QWidget(myteam);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(570, 210, 191, 80));
        verticalLayout_3 = new QVBoxLayout(formLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        secondndDefenderLabel = new QLabel(formLayoutWidget_3);
        secondndDefenderLabel->setObjectName("secondndDefenderLabel");

        verticalLayout_3->addWidget(secondndDefenderLabel, 0, Qt::AlignHCenter);

        pl2points = new QLineEdit(formLayoutWidget_3);
        pl2points->setObjectName("pl2points");
        pl2points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl2points->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(pl2points);

        pl2 = new QLineEdit(formLayoutWidget_3);
        pl2->setObjectName("pl2");
        pl2->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(pl2);

        formLayoutWidget_4 = new QWidget(myteam);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(890, 260, 191, 80));
        verticalLayout_4 = new QVBoxLayout(formLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        thirdDefenderLabel = new QLabel(formLayoutWidget_4);
        thirdDefenderLabel->setObjectName("thirdDefenderLabel");

        verticalLayout_4->addWidget(thirdDefenderLabel, 0, Qt::AlignHCenter);

        pl3points = new QLineEdit(formLayoutWidget_4);
        pl3points->setObjectName("pl3points");
        pl3points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl3points->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(pl3points);

        pl3 = new QLineEdit(formLayoutWidget_4);
        pl3->setObjectName("pl3");
        pl3->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(pl3);

        formLayoutWidget_6 = new QWidget(myteam);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(720, 410, 171, 80));
        verticalLayout_6 = new QVBoxLayout(formLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        secondMidfielderLabel = new QLabel(formLayoutWidget_6);
        secondMidfielderLabel->setObjectName("secondMidfielderLabel");

        verticalLayout_6->addWidget(secondMidfielderLabel, 0, Qt::AlignHCenter);

        pl5points = new QLineEdit(formLayoutWidget_6);
        pl5points->setObjectName("pl5points");
        pl5points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl5points->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(pl5points);

        pl5 = new QLineEdit(formLayoutWidget_6);
        pl5->setObjectName("pl5");
        pl5->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
"\n"
""));
        pl5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(pl5);

        formLayoutWidget_5 = new QWidget(myteam);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(390, 410, 191, 80));
        verticalLayout_5 = new QVBoxLayout(formLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        firstMidfielderLabel = new QLabel(formLayoutWidget_5);
        firstMidfielderLabel->setObjectName("firstMidfielderLabel");

        verticalLayout_5->addWidget(firstMidfielderLabel, 0, Qt::AlignHCenter);

        pl4points = new QLineEdit(formLayoutWidget_5);
        pl4points->setObjectName("pl4points");
        pl4points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl4points->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(pl4points);

        pl4 = new QLineEdit(formLayoutWidget_5);
        pl4->setObjectName("pl4");
        pl4->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(pl4);

        formLayoutWidget_7 = new QWidget(myteam);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(570, 550, 201, 80));
        verticalLayout_7 = new QVBoxLayout(formLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        attackerLabel = new QLabel(formLayoutWidget_7);
        attackerLabel->setObjectName("attackerLabel");

        verticalLayout_7->addWidget(attackerLabel, 0, Qt::AlignHCenter);

        pl6points = new QLineEdit(formLayoutWidget_7);
        pl6points->setObjectName("pl6points");
        pl6points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl6points->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(pl6points);

        pl6 = new QLineEdit(formLayoutWidget_7);
        pl6->setObjectName("pl6");
        pl6->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(pl6);

        formLayoutWidget_2 = new QWidget(myteam);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(190, 220, 191, 80));
        verticalLayout_2 = new QVBoxLayout(formLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel = new QLabel(formLayoutWidget_2);
        firstDefenderLabel->setObjectName("firstDefenderLabel");

        verticalLayout_2->addWidget(firstDefenderLabel, 0, Qt::AlignHCenter);

        pl1points = new QLineEdit(formLayoutWidget_2);
        pl1points->setObjectName("pl1points");
        pl1points->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        pl1points->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(pl1points);

        pl1 = new QLineEdit(formLayoutWidget_2);
        pl1->setObjectName("pl1");
        pl1->setStyleSheet(QString::fromUtf8("font-weight: bold;	\n"
" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
""));
        pl1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(pl1);

        formLayoutWidget_8 = new QWidget(myteam);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(80, 500, 191, 80));
        verticalLayout_8 = new QVBoxLayout(formLayoutWidget_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel_2 = new QLabel(formLayoutWidget_8);
        firstDefenderLabel_2->setObjectName("firstDefenderLabel_2");

        verticalLayout_8->addWidget(firstDefenderLabel_2);

        TotalPoints = new QLineEdit(formLayoutWidget_8);
        TotalPoints->setObjectName("TotalPoints");
        TotalPoints->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        TotalPoints->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(TotalPoints);

        pl1_2 = new QLineEdit(formLayoutWidget_8);
        pl1_2->setObjectName("pl1_2");
        pl1_2->setStyleSheet(QString::fromUtf8("font-weight: bold;	\n"
" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
""));
        pl1_2->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(pl1_2);

        formLayoutWidget_9 = new QWidget(myteam);
        formLayoutWidget_9->setObjectName("formLayoutWidget_9");
        formLayoutWidget_9->setGeometry(QRect(1070, 610, 191, 80));
        verticalLayout_9 = new QVBoxLayout(formLayoutWidget_9);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel_3 = new QLabel(formLayoutWidget_9);
        firstDefenderLabel_3->setObjectName("firstDefenderLabel_3");

        verticalLayout_9->addWidget(firstDefenderLabel_3, 0, Qt::AlignHCenter);

        totalPointsName = new QLineEdit(formLayoutWidget_9);
        totalPointsName->setObjectName("totalPointsName");
        totalPointsName->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        totalPointsName->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(totalPointsName);

        totalPoints = new QLineEdit(formLayoutWidget_9);
        totalPoints->setObjectName("totalPoints");
        totalPoints->setStyleSheet(QString::fromUtf8("font-weight: bold;	\n"
" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
""));
        totalPoints->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(totalPoints);

        formLayoutWidget_10 = new QWidget(myteam);
        formLayoutWidget_10->setObjectName("formLayoutWidget_10");
        formLayoutWidget_10->setGeometry(QRect(860, 610, 191, 80));
        verticalLayout_10 = new QVBoxLayout(formLayoutWidget_10);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        firstDefenderLabel_4 = new QLabel(formLayoutWidget_10);
        firstDefenderLabel_4->setObjectName("firstDefenderLabel_4");

        verticalLayout_10->addWidget(firstDefenderLabel_4, 0, Qt::AlignHCenter);

        higherGameWeekName = new QLineEdit(formLayoutWidget_10);
        higherGameWeekName->setObjectName("higherGameWeekName");
        higherGameWeekName->setStyleSheet(QString::fromUtf8(" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"font-weight: bold;\n"
""));
        higherGameWeekName->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(higherGameWeekName);

        higherGameWeekPoints = new QLineEdit(formLayoutWidget_10);
        higherGameWeekPoints->setObjectName("higherGameWeekPoints");
        higherGameWeekPoints->setStyleSheet(QString::fromUtf8("font-weight: bold;	\n"
" text-align: center; 	\n"
"	color: rgb(0, 0, 0);\n"
"	border:none;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
""));
        higherGameWeekPoints->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(higherGameWeekPoints);


        retranslateUi(myteam);

        QMetaObject::connectSlotsByName(myteam);
    } // setupUi

    void retranslateUi(QDialog *myteam)
    {
        myteam->setWindowTitle(QCoreApplication::translate("myteam", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("myteam", "My Team", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("myteam", "Transfers", nullptr));
        pushButton->setText(QCoreApplication::translate("myteam", "Logout", nullptr));
        goalkeeperLabel->setText(QCoreApplication::translate("myteam", "goalkeeper", nullptr));
        secondndDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        thirdDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        secondMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        firstMidfielderLabel->setText(QCoreApplication::translate("myteam", "midfielder", nullptr));
        attackerLabel->setText(QCoreApplication::translate("myteam", "attacker", nullptr));
        firstDefenderLabel->setText(QCoreApplication::translate("myteam", "defender", nullptr));
        firstDefenderLabel_2->setText(QCoreApplication::translate("myteam", "Total Points", nullptr));
        firstDefenderLabel_3->setText(QCoreApplication::translate("myteam", "higher total points", nullptr));
        totalPointsName->setText(QString());
        firstDefenderLabel_4->setText(QCoreApplication::translate("myteam", "higher gameWeek points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myteam: public Ui_myteam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEAM_H
