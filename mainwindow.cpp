#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./services/fileservices.h"
#include "./models/team.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    login = new Login(this);
    close();
    login->show();
}


void MainWindow::on_signupButton_clicked()
{
    signup = new Signup(this);
    close();
    signup->show();
}

