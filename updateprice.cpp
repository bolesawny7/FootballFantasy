#include "updateprice.h"
#include "ui_updateprice.h"
#include "services/playersservice.h"
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
