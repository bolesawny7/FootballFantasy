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
    QPushButton *addpoints;
    QPushButton *back;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *selectPlayerLabel_2;
    QComboBox *selectPlayerComboBox_2;
    QLabel *pointsForLabel_2;
    QComboBox *pointsForComboBox_2;

    void setupUi(QDialog *updatepoints)
    {
        if (updatepoints->objectName().isEmpty())
            updatepoints->setObjectName("updatepoints");
        updatepoints->resize(1304, 679);
        updatepoints->setStyleSheet(QString::fromUtf8("updatepoints{\n"
"	background-image: url(:/background/fantasy.png);\n"
"}"));
        addpoints = new QPushButton(updatepoints);
        addpoints->setObjectName("addpoints");
        addpoints->setGeometry(QRect(500, 350, 231, 29));
        back = new QPushButton(updatepoints);
        back->setObjectName("back");
        back->setGeometry(QRect(50, 40, 181, 29));
        formLayoutWidget = new QWidget(updatepoints);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(230, 180, 871, 71));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        selectPlayerLabel_2 = new QLabel(formLayoutWidget);
        selectPlayerLabel_2->setObjectName("selectPlayerLabel_2");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, selectPlayerLabel_2);

        selectPlayerComboBox_2 = new QComboBox(formLayoutWidget);
        selectPlayerComboBox_2->setObjectName("selectPlayerComboBox_2");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, selectPlayerComboBox_2);

        pointsForLabel_2 = new QLabel(formLayoutWidget);
        pointsForLabel_2->setObjectName("pointsForLabel_2");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pointsForLabel_2);

        pointsForComboBox_2 = new QComboBox(formLayoutWidget);
        pointsForComboBox_2->setObjectName("pointsForComboBox_2");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pointsForComboBox_2);


        retranslateUi(updatepoints);

        QMetaObject::connectSlotsByName(updatepoints);
    } // setupUi

    void retranslateUi(QDialog *updatepoints)
    {
        updatepoints->setWindowTitle(QCoreApplication::translate("updatepoints", "Dialog", nullptr));
        addpoints->setText(QCoreApplication::translate("updatepoints", "add points", nullptr));
        back->setText(QCoreApplication::translate("updatepoints", "<-backe", nullptr));
        selectPlayerLabel_2->setText(QCoreApplication::translate("updatepoints", "select player", nullptr));
        pointsForLabel_2->setText(QCoreApplication::translate("updatepoints", "points for", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatepoints: public Ui_updatepoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPOINTS_H
