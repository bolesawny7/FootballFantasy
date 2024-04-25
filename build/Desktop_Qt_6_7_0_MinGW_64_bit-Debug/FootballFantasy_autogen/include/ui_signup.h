/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *league;
    QLabel *label_3;
    QLineEdit *firstName;
    QLabel *label_4;
    QLineEdit *lastName;
    QLabel *label_5;
    QLineEdit *email;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QLineEdit *gender;
    QPushButton *signupButton;
    QLabel *label_8;
    QPushButton *loginPage;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(1340, 805);
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 1271, 751));
        label->setPixmap(QPixmap(QString::fromUtf8("images/background.png")));
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 70, 981, 561));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        league = new QLineEdit(groupBox);
        league->setObjectName("league");

        verticalLayout->addWidget(league);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        firstName = new QLineEdit(groupBox);
        firstName->setObjectName("firstName");

        verticalLayout->addWidget(firstName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lastName = new QLineEdit(groupBox);
        lastName->setObjectName("lastName");

        verticalLayout->addWidget(lastName);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        email = new QLineEdit(groupBox);
        email->setObjectName("email");

        verticalLayout->addWidget(email);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");

        verticalLayout->addWidget(password);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        gender = new QLineEdit(groupBox);
        gender->setObjectName("gender");

        verticalLayout->addWidget(gender);

        signupButton = new QPushButton(groupBox);
        signupButton->setObjectName("signupButton");

        verticalLayout->addWidget(signupButton);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        loginPage = new QPushButton(groupBox);
        loginPage->setObjectName("loginPage");

        verticalLayout->addWidget(loginPage);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Signup", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "league", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "firstName", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "lastName", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "email", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "password", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "gender", nullptr));
        signupButton->setText(QCoreApplication::translate("Signup", "Signup", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "login", nullptr));
        loginPage->setText(QCoreApplication::translate("Signup", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
