#ifndef UPDATEPRICE_H
#define UPDATEPRICE_H
#include "./services/adminservices.h"
#include <QDialog>

namespace Ui {
class updateprice;
}

class updateprice : public QDialog
{
    Q_OBJECT

public:
    explicit updateprice(QWidget *parent = nullptr);
    ~updateprice();
    Adminservices admin;
    vector<Footballer> footballPlayers;
    string get_name(string text);

private slots:
    void on_back_clicked();

    void on_increase_clicked();

    void on_deacrease_clicked();

    void on_search_clicked();

private:
    Ui::updateprice *ui;
};

#endif // UPDATEPRICE_H
