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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *content;
    QTableWidget *tableWidget;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QListView *WeekFixtures;
    QListView *TeamFixtures;
    QTextEdit *textEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LeaguesButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(1318, 831);
        Home->setStyleSheet(QString::fromUtf8("Home{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}\n"
""));
        content = new QWidget(Home);
        content->setObjectName("content");
        content->setGeometry(QRect(9, 49, 1301, 781));
        tableWidget = new QTableWidget(content);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 180, 511, 441));
        textBrowser = new QTextBrowser(content);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(360, 60, 621, 91));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        textEdit = new QTextEdit(content);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(140, 120, 311, 85));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        textEdit_2 = new QTextEdit(content);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(930, 120, 351, 85));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        WeekFixtures = new QListView(content);
        WeekFixtures->setObjectName("WeekFixtures");
        WeekFixtures->setGeometry(QRect(550, 180, 351, 441));
        TeamFixtures = new QListView(content);
        TeamFixtures->setObjectName("TeamFixtures");
        TeamFixtures->setGeometry(QRect(930, 180, 351, 441));
        textEdit_3 = new QTextEdit(content);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(540, 120, 351, 85));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        layoutWidget = new QWidget(Home);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 1311, 51));
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

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(55, 0, 60);\n"
"background-color: rgb(0, 255, 135);\n"
"border-radius-top: 20px;"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Home", "Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Home", "Points", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Home", "MP", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Home", "Arsenal", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Home", "Manchester City", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Home", "Liverpool", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">Welcome UserName</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00ff87;\">League Table</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00ff87;\">Your Team Fixtures</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00ff87;\">Gameweek Matches</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:700; color:#00ff87;\"><br /></p></body></html>", nullptr));
        LeaguesButton->setText(QCoreApplication::translate("Home", "Leagues", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Home", "My Team", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Home", "My Leagues", nullptr));
        pushButton->setText(QCoreApplication::translate("Home", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
