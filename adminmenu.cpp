#include "adminmenu.h"
#include "ui_adminmenu.h"
#include "teamandpos.h"
adminmenu::adminmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminmenu)
{
    ui->setupUi(this);
}

adminmenu::~adminmenu()
{
    delete ui;
}

void adminmenu::on_updatepoints_clicked()
{
    teamandpos select;
    select.setModal(true);
    close();
    select.exec();
}

