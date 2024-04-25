#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "./services/auth.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

    void on_signupPage_clicked();

    void on_loginButton_clicked();

private:
    Ui::Login *ui;
    Auth auth;
};

#endif // LOGIN_H
