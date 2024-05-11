/********************************************************************************
** Form generated from reading UI file 'updateprice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPRICE_H
#define UI_UPDATEPRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateprice
{
public:
    QPushButton *increase;
    QPushButton *deacrease;
    QPushButton *back;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *selectPlayerLabel;
    QComboBox *selectPlayerComboBox;

    void setupUi(QDialog *updateprice)
    {
        if (updateprice->objectName().isEmpty())
            updateprice->setObjectName("updateprice");
        updateprice->resize(1314, 663);
        updateprice->setStyleSheet(QString::fromUtf8("updateprice{\n"
"background-image: url(:/background/fantasy.png);\n"
"}"));
        increase = new QPushButton(updateprice);
        increase->setObjectName("increase");
        increase->setGeometry(QRect(270, 260, 261, 29));
        deacrease = new QPushButton(updateprice);
        deacrease->setObjectName("deacrease");
        deacrease->setGeometry(QRect(690, 260, 261, 29));
        back = new QPushButton(updateprice);
        back->setObjectName("back");
        back->setGeometry(QRect(80, 50, 83, 29));
        formLayoutWidget = new QWidget(updateprice);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(220, 160, 771, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        selectPlayerLabel = new QLabel(formLayoutWidget);
        selectPlayerLabel->setObjectName("selectPlayerLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, selectPlayerLabel);

        selectPlayerComboBox = new QComboBox(formLayoutWidget);
        selectPlayerComboBox->setObjectName("selectPlayerComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, selectPlayerComboBox);


        retranslateUi(updateprice);

        QMetaObject::connectSlotsByName(updateprice);
    } // setupUi

    void retranslateUi(QDialog *updateprice)
    {
        updateprice->setWindowTitle(QCoreApplication::translate("updateprice", "Dialog", nullptr));
        increase->setText(QCoreApplication::translate("updateprice", "increase price", nullptr));
        deacrease->setText(QCoreApplication::translate("updateprice", "decrease price", nullptr));
        back->setText(QCoreApplication::translate("updateprice", "back", nullptr));
        selectPlayerLabel->setText(QCoreApplication::translate("updateprice", "select player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateprice: public Ui_updateprice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPRICE_H
