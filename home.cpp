#include "home.h"
#include "ui_home.h"

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
    QGridLayout* layout = new QGridLayout(this);
    QWidget* login = new QWidget(this);
    layout->addWidget(login, 0, 0);
    ui->content->setLayout(layout);
}

