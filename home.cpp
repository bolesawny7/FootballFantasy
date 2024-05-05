#include "home.h"
#include "ui_home.h"
#include "myteam.h"

Home::Home(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::on_pushButton_3_clicked()
{
    myteam team;
    team.setModal(true);
    close();
    team.exec();
}
