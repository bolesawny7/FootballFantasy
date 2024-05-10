#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "./services/auth.h"

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_signupButton_clicked();

    void on_loginPage_clicked();
    void on_roleComboBox_textActivated( QString arg1);

private:
    Ui::Signup *ui;
    Auth auth;
};

#endif // SIGNUP_H
