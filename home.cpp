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


void Home::on_pushButton_2_clicked()
{
    searching search;
    search.setModal(true);
    search.exec();
}

