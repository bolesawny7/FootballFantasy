/********************************************************************************
** Form generated from reading UI file 'teamandpos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMANDPOS_H
#define UI_TEAMANDPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teamandpos
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *teamLabel;
    QComboBox *teamComboBox;
    QLabel *positionLabel;
    QComboBox *positionComboBox;
    QLabel *updateLabel;
    QComboBox *updateComboBox;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *teamandpos)
    {
        if (teamandpos->objectName().isEmpty())
            teamandpos->setObjectName("teamandpos");
        teamandpos->resize(1310, 664);
        teamandpos->setStyleSheet(QString::fromUtf8("teamandpos{\n"
"background-image: url(:/background/fantasy.png);\n"
"}"));
        formLayoutWidget = new QWidget(teamandpos);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(290, 160, 701, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        teamLabel = new QLabel(formLayoutWidget);
        teamLabel->setObjectName("teamLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, teamLabel);

        teamComboBox = new QComboBox(formLayoutWidget);
        teamComboBox->setObjectName("teamComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, teamComboBox);

        positionLabel = new QLabel(formLayoutWidget);
        positionLabel->setObjectName("positionLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, positionLabel);

        positionComboBox = new QComboBox(formLayoutWidget);
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->setObjectName("positionComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, positionComboBox);

        updateLabel = new QLabel(formLayoutWidget);
        updateLabel->setObjectName("updateLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, updateLabel);

        updateComboBox = new QComboBox(formLayoutWidget);
        updateComboBox->addItem(QString());
        updateComboBox->addItem(QString());
        updateComboBox->setObjectName("updateComboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, updateComboBox);

        textEdit = new QTextEdit(teamandpos);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(290, 120, 361, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"border:none;"));
        pushButton = new QPushButton(teamandpos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 290, 521, 29));

        retranslateUi(teamandpos);

        QMetaObject::connectSlotsByName(teamandpos);
    } // setupUi

    void retranslateUi(QDialog *teamandpos)
    {
        teamandpos->setWindowTitle(QCoreApplication::translate("teamandpos", "Dialog", nullptr));
        teamLabel->setText(QCoreApplication::translate("teamandpos", "team", nullptr));
        positionLabel->setText(QCoreApplication::translate("teamandpos", "position", nullptr));
        positionComboBox->setItemText(0, QCoreApplication::translate("teamandpos", "GK", nullptr));
        positionComboBox->setItemText(1, QCoreApplication::translate("teamandpos", "DF", nullptr));
        positionComboBox->setItemText(2, QCoreApplication::translate("teamandpos", "MF", nullptr));
        positionComboBox->setItemText(3, QCoreApplication::translate("teamandpos", "ST", nullptr));

        updateLabel->setText(QCoreApplication::translate("teamandpos", "update", nullptr));
        updateComboBox->setItemText(0, QCoreApplication::translate("teamandpos", "points", nullptr));
        updateComboBox->setItemText(1, QCoreApplication::translate("teamandpos", "priec", nullptr));

        textEdit->setHtml(QCoreApplication::translate("teamandpos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">select team and position of the player to update:</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("teamandpos", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teamandpos: public Ui_teamandpos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMANDPOS_H
