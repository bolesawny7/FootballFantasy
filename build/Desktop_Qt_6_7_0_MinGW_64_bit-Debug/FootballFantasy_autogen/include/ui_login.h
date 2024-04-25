/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QTextBrowser *textBrowser;
    QPushButton *loginButton;
    QTextBrowser *textBrowser_2;
    QPushButton *signup;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1347, 755);
        Login->setStyleSheet(QString::fromUtf8("Login{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}\n"
""));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(260, 120, 851, 391));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(100, 150, 651, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, emailLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(280, 60, 256, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(270, 240, 291, 41));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(110, 330, 181, 51));
        textBrowser_2->setStyleSheet(QString::fromUtf8("\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        signup = new QPushButton(groupBox);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(292, 330, 161, 29));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        groupBox->setTitle(QString());
        emailLabel->setText(QCoreApplication::translate("Login", "email", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "password", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:700;\">Login</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">don't have an account?</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        signup->setText(QCoreApplication::translate("Login", "signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
