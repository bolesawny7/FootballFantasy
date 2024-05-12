/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *updatepoints;
    QPushButton *logout;

    void setupUi(QDialog *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName("adminmenu");
        adminmenu->setEnabled(true);
        adminmenu->resize(1313, 862);
        adminmenu->setStyleSheet(QString::fromUtf8("adminmenu{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}"));
        textBrowser = new QTextBrowser(adminmenu);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(410, 210, 451, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"border:none;"));
        layoutWidget = new QWidget(adminmenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(450, 300, 361, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        updatepoints = new QPushButton(layoutWidget);
        updatepoints->setObjectName("updatepoints");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updatepoints->sizePolicy().hasHeightForWidth());
        updatepoints->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(updatepoints);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName("logout");
        sizePolicy.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(logout);


        retranslateUi(adminmenu);

        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QDialog *adminmenu)
    {
        adminmenu->setWindowTitle(QCoreApplication::translate("adminmenu", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("adminmenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Admin Mainmenu </span></p></body></html>", nullptr));
        updatepoints->setText(QCoreApplication::translate("adminmenu", "update player", nullptr));
        logout->setText(QCoreApplication::translate("adminmenu", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
