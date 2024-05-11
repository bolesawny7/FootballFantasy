/********************************************************************************
** Form generated from reading UI file 'searching.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHING_H
#define UI_SEARCHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searching
{
public:
    QComboBox *comboBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QPushButton *addPlayer;
    QPushButton *pushButton;

    void setupUi(QDialog *searching)
    {
        if (searching->objectName().isEmpty())
            searching->setObjectName("searching");
        searching->resize(1293, 654);
        searching->setStyleSheet(QString::fromUtf8("searching{\n"
"background-image: url(:/background/fantasy.png);\n"
"}"));
        comboBox = new QComboBox(searching);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 190, 771, 28));
        formLayoutWidget = new QWidget(searching);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(240, 150, 771, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        searchLabel = new QLabel(formLayoutWidget);
        searchLabel->setObjectName("searchLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, searchLabel);

        searchLineEdit = new QLineEdit(formLayoutWidget);
        searchLineEdit->setObjectName("searchLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, searchLineEdit);

        addPlayer = new QPushButton(searching);
        addPlayer->setObjectName("addPlayer");
        addPlayer->setGeometry(QRect(450, 280, 351, 51));
        pushButton = new QPushButton(searching);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1020, 150, 91, 29));

        retranslateUi(searching);

        QMetaObject::connectSlotsByName(searching);
    } // setupUi

    void retranslateUi(QDialog *searching)
    {
        searching->setWindowTitle(QCoreApplication::translate("searching", "Dialog", nullptr));
        searchLabel->setText(QCoreApplication::translate("searching", "search", nullptr));
        addPlayer->setText(QCoreApplication::translate("searching", "add player", nullptr));
        pushButton->setText(QCoreApplication::translate("searching", "search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searching: public Ui_searching {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHING_H
