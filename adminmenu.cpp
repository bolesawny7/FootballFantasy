#include "adminmenu.h"
#include "ui_adminmenu.h"
#include "services/Adminservices.h"
#include "teamandpos.h"
#include "login.h"
adminmenu::adminmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminmenu)
{
    ui->setupUi(this);
    Adminservices admin;
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


void adminmenu::on_logout_clicked()
{
    Login login;
    login.setModal(true);
    close();
    login.exec();
}

