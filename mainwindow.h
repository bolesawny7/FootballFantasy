#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// #include "./services/userservice.h""
#include "login.h"
#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

    void on_signupButton_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
    Signup *signup;
    // UserService user;
};
#endif // MAINWINDOW_H
