/********************************************************************************
** Form generated from reading UI file 'updatepoints.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPOINTS_H
#define UI_UPDATEPOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updatepoints
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *selectPlayerLabel;
    QComboBox *selectPlayerComboBox;
    QLabel *pointsForLabel;
    QComboBox *pointsForComboBox;
    QPushButton *addpoints;
    QPushButton *back;

    void setupUi(QDialog *updatepoints)
    {
        if (updatepoints->objectName().isEmpty())
            updatepoints->setObjectName("updatepoints");
        updatepoints->resize(1323, 657);
        updatepoints->setStyleSheet(QString::fromUtf8("updatepoints{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}"));
        formLayoutWidget = new QWidget(updatepoints);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(230, 170, 871, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        selectPlayerLabel = new QLabel(formLayoutWidget);
        selectPlayerLabel->setObjectName("selectPlayerLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, selectPlayerLabel);

        selectPlayerComboBox = new QComboBox(formLayoutWidget);
        selectPlayerComboBox->setObjectName("selectPlayerComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, selectPlayerComboBox);

        pointsForLabel = new QLabel(formLayoutWidget);
        pointsForLabel->setObjectName("pointsForLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, pointsForLabel);

        pointsForComboBox = new QComboBox(formLayoutWidget);
        pointsForComboBox->setObjectName("pointsForComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, pointsForComboBox);

        addpoints = new QPushButton(updatepoints);
        addpoints->setObjectName("addpoints");
        addpoints->setGeometry(QRect(530, 350, 231, 29));
        back = new QPushButton(updatepoints);
        back->setObjectName("back");
        back->setGeometry(QRect(50, 30, 181, 29));

        retranslateUi(updatepoints);

        QMetaObject::connectSlotsByName(updatepoints);
    } // setupUi

    void retranslateUi(QDialog *updatepoints)
    {
        updatepoints->setWindowTitle(QCoreApplication::translate("updatepoints", "Dialog", nullptr));
        selectPlayerLabel->setText(QCoreApplication::translate("updatepoints", "select player", nullptr));
        pointsForLabel->setText(QCoreApplication::translate("updatepoints", "points for", nullptr));
        addpoints->setText(QCoreApplication::translate("updatepoints", "add points", nullptr));
        back->setText(QCoreApplication::translate("updatepoints", "<-backe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatepoints: public Ui_updatepoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPOINTS_H
