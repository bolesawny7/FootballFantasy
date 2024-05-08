/********************************************************************************
** Form generated from reading UI file 'favleague.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVLEAGUE_H
#define UI_FAVLEAGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_favleague
{
public:
    QWidget *formLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *favouriteLeagueLabel;
    QComboBox *favouriteLeagueComboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *favleague)
    {
        if (favleague->objectName().isEmpty())
            favleague->setObjectName("favleague");
        favleague->resize(1310, 834);
        favleague->setStyleSheet(QString::fromUtf8("favleague{\n"
"background-image: url(:/background/fantasy.png);\n"
"}"));
        formLayoutWidget = new QWidget(favleague);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(240, 169, 851, 57));
        verticalLayout = new QVBoxLayout(formLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        favouriteLeagueLabel = new QLabel(formLayoutWidget);
        favouriteLeagueLabel->setObjectName("favouriteLeagueLabel");

        verticalLayout->addWidget(favouriteLeagueLabel);

        favouriteLeagueComboBox = new QComboBox(formLayoutWidget);
        favouriteLeagueComboBox->addItem(QString());
        favouriteLeagueComboBox->addItem(QString());
        favouriteLeagueComboBox->addItem(QString());
        favouriteLeagueComboBox->setObjectName("favouriteLeagueComboBox");

        verticalLayout->addWidget(favouriteLeagueComboBox);

        pushButton = new QPushButton(favleague);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 320, 201, 29));

        retranslateUi(favleague);

        QMetaObject::connectSlotsByName(favleague);
    } // setupUi

    void retranslateUi(QDialog *favleague)
    {
        favleague->setWindowTitle(QCoreApplication::translate("favleague", "Dialog", nullptr));
        favouriteLeagueLabel->setText(QCoreApplication::translate("favleague", "favourite league", nullptr));
        favouriteLeagueComboBox->setItemText(0, QCoreApplication::translate("favleague", "Premier League", nullptr));
        favouriteLeagueComboBox->setItemText(1, QCoreApplication::translate("favleague", "La Liga", nullptr));
        favouriteLeagueComboBox->setItemText(2, QCoreApplication::translate("favleague", "Seria A", nullptr));

        pushButton->setText(QCoreApplication::translate("favleague", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class favleague: public Ui_favleague {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVLEAGUE_H
