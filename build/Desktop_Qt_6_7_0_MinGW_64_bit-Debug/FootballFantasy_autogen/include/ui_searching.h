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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *searching)
    {
        if (searching->objectName().isEmpty())
            searching->setObjectName("searching");
        searching->resize(1293, 654);
        searching->setStyleSheet(QString::fromUtf8("searching{\n"
"background-image: url(:/background/fantasy.png);\n"
"}"));
        formLayoutWidget = new QWidget(searching);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(240, 30, 771, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        searchLabel = new QLabel(formLayoutWidget);
        searchLabel->setObjectName("searchLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, searchLabel);

        searchLineEdit = new QLineEdit(formLayoutWidget);
        searchLineEdit->setObjectName("searchLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, searchLineEdit);

        comboBox = new QComboBox(searching);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 70, 771, 28));
        pushButton = new QPushButton(searching);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1020, 30, 91, 29));

        retranslateUi(searching);

        QMetaObject::connectSlotsByName(searching);
    } // setupUi

    void retranslateUi(QDialog *searching)
    {
        searching->setWindowTitle(QCoreApplication::translate("searching", "Dialog", nullptr));
        searchLabel->setText(QCoreApplication::translate("searching", "search", nullptr));
        pushButton->setText(QCoreApplication::translate("searching", "search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searching: public Ui_searching {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHING_H
