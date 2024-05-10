#include "updateprice.h"
#include "ui_updateprice.h"

updateprice::updateprice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updateprice)
{
    ui->setupUi(this);
}

updateprice::~updateprice()
{
    delete ui;
}
