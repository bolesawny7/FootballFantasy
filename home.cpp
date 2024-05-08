#include "home.h"
#include "ui_home.h"
#include "myteam.h"
#include "./models/footballer.h"
#include "searching.h"
#include "./services/transferservices.h"
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


// void Home::on_searchLineEdit_editingFinished()
// {
//     transferservices trans;
//     Footballer thePlayer= trans.playerSearch(ui->searchLineEdit);

// }
transferservices tran;

void Home::on_pushButton_2_clicked()
{
    tran.setSearchValue("GK");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_4_clicked()
{
    tran.setSearchValue("DF");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_5_clicked()
{
    tran.setSearchValue("DF");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_6_clicked()
{
    tran.setSearchValue("DF");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_7_clicked()
{
    tran.setSearchValue("MF");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_8_clicked()
{
    tran.setSearchValue("MF");
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_9_clicked()
{
    tran.setSearchValue("ST");
    searching search;
    search.setModal(true);
    search.exec();
}

