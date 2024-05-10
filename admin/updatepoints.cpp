#include "updatepoints.h"
#include "ui_updatepoints.h"

updatepoints::updatepoints(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updatepoints)
{
    ui->setupUi(this);
}

updatepoints::~updatepoints()
{
    delete ui;
}
