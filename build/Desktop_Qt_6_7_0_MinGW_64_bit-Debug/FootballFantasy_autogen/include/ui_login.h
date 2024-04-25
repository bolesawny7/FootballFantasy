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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *loginPage;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1347, 755);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1261, 751));
        label->setPixmap(QPixmap(QString::fromUtf8("images/background.png")));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 170, 661, 271));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        email = new QLineEdit(groupBox);
        email->setObjectName("email");

        verticalLayout->addWidget(email);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");

        verticalLayout->addWidget(password);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        loginPage = new QPushButton(groupBox);
        loginPage->setObjectName("loginPage");

        verticalLayout->addWidget(loginPage);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "email", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "password", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "signup", nullptr));
        loginPage->setText(QCoreApplication::translate("Login", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
