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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QPushButton *signupButton;
    QTextBrowser *textBrowser_2;
    QPushButton *loginPage;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *leagueLabel;
    QComboBox *leagueComboBox;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QLabel *eMailLabel;
    QLineEdit *eMailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *genderLabel;
    QComboBox *genderComboBox;
    QLabel *favouriteTeamLabel;
    QComboBox *favouriteTeamComboBox;
    QLabel *roleLabel;
    QComboBox *roleComboBox;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->setEnabled(true);
        Signup->resize(1340, 805);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Signup->sizePolicy().hasHeightForWidth());
        Signup->setSizePolicy(sizePolicy);
        Signup->setStyleSheet(QString::fromUtf8("Signup{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}\n"
""));
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(530, 130, 231, 81));
        textBrowser = new QTextBrowser(Signup);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(550, 150, 256, 71));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(310, 100, 741, 471));
        groupBox->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        signupButton = new QPushButton(groupBox);
        signupButton->setObjectName("signupButton");
        signupButton->setEnabled(true);
        signupButton->setGeometry(QRect(130, 380, 522, 29));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signupButton->sizePolicy().hasHeightForWidth());
        signupButton->setSizePolicy(sizePolicy1);
        signupButton->setMinimumSize(QSize(122, 0));
        signupButton->setMaximumSize(QSize(522, 16777215));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(210, 420, 181, 31));
        textBrowser_2->setStyleSheet(QString::fromUtf8("\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
""));
        loginPage = new QPushButton(groupBox);
        loginPage->setObjectName("loginPage");
        loginPage->setGeometry(QRect(410, 420, 161, 29));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 130, 601, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(0, 0, 0, 0);
        leagueLabel = new QLabel(formLayoutWidget);
        leagueLabel->setObjectName("leagueLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, leagueLabel);

        leagueComboBox = new QComboBox(formLayoutWidget);
        leagueComboBox->addItem(QString());
        leagueComboBox->addItem(QString());
        leagueComboBox->addItem(QString());
        leagueComboBox->setObjectName("leagueComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, leagueComboBox);

        userNameLabel = new QLabel(formLayoutWidget);
        userNameLabel->setObjectName("userNameLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, userNameLabel);

        userNameLineEdit = new QLineEdit(formLayoutWidget);
        userNameLineEdit->setObjectName("userNameLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, userNameLineEdit);

        eMailLabel = new QLabel(formLayoutWidget);
        eMailLabel->setObjectName("eMailLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, eMailLabel);

        eMailLineEdit = new QLineEdit(formLayoutWidget);
        eMailLineEdit->setObjectName("eMailLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, eMailLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, passwordLineEdit);

        genderLabel = new QLabel(formLayoutWidget);
        genderLabel->setObjectName("genderLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, genderLabel);

        genderComboBox = new QComboBox(formLayoutWidget);
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->setObjectName("genderComboBox");

        formLayout->setWidget(4, QFormLayout::FieldRole, genderComboBox);

        favouriteTeamLabel = new QLabel(formLayoutWidget);
        favouriteTeamLabel->setObjectName("favouriteTeamLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, favouriteTeamLabel);

        favouriteTeamComboBox = new QComboBox(formLayoutWidget);
        favouriteTeamComboBox->addItem(QString());
        favouriteTeamComboBox->addItem(QString());
        favouriteTeamComboBox->setObjectName("favouriteTeamComboBox");

        formLayout->setWidget(5, QFormLayout::FieldRole, favouriteTeamComboBox);

        roleLabel = new QLabel(formLayoutWidget);
        roleLabel->setObjectName("roleLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, roleLabel);

        roleComboBox = new QComboBox(formLayoutWidget);
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");

        formLayout->setWidget(6, QFormLayout::FieldRole, roleComboBox);

        groupBox->raise();
        label->raise();
        textBrowser->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:700;\">Register</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        signupButton->setText(QCoreApplication::translate("Signup", "signup", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">already have an account?</p></body></html>", nullptr));
        loginPage->setText(QCoreApplication::translate("Signup", "Login", nullptr));
        leagueLabel->setText(QCoreApplication::translate("Signup", "league", nullptr));
        leagueComboBox->setItemText(0, QCoreApplication::translate("Signup", "premier league", nullptr));
        leagueComboBox->setItemText(1, QCoreApplication::translate("Signup", "La liga", nullptr));
        leagueComboBox->setItemText(2, QCoreApplication::translate("Signup", "Seria A", nullptr));

        userNameLabel->setText(QCoreApplication::translate("Signup", "User name", nullptr));
        eMailLabel->setText(QCoreApplication::translate("Signup", "E-mail", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Signup", "password", nullptr));
        genderLabel->setText(QCoreApplication::translate("Signup", "Gender", nullptr));
        genderComboBox->setItemText(0, QCoreApplication::translate("Signup", "male", nullptr));
        genderComboBox->setItemText(1, QCoreApplication::translate("Signup", "female", nullptr));

        favouriteTeamLabel->setText(QCoreApplication::translate("Signup", "favourite Team", nullptr));
        favouriteTeamComboBox->setItemText(0, QCoreApplication::translate("Signup", "liverpool", nullptr));
        favouriteTeamComboBox->setItemText(1, QCoreApplication::translate("Signup", "Man city", nullptr));

        roleLabel->setText(QCoreApplication::translate("Signup", "role", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("Signup", "user", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("Signup", "admin", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
