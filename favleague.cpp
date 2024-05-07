#include "favleague.h"
#include "ui_favleague.h"
#include "./signup.h"
#include "./services/fileservices.h"
favleague::favleague(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::favleague)
{
    ui->setupUi(this);
}

favleague::~favleague()
{
    delete ui;
}

void favleague::on_pushButton_clicked()
{
    fileServices files;
    files.getLeagueByName(ui->favouriteLeagueComboBox->currentText().toStdString());
    Signup signup;
    signup.setModal(true);
    close();
    signup.exec();
}

