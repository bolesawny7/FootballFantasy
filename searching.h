#ifndef SEARCHING_H
#define SEARCHING_H

#include <QDialog>
#include <vector>
#include "models/footballer.h"
namespace Ui {
class searching;
}

class searching : public QDialog
{
    Q_OBJECT

public:
    explicit searching(QWidget *parent = nullptr);
    vector<Footballer> footballPlayers;
    ~searching();

private slots:

    void on_pushButton_clicked();

    void on_addPlayer_clicked();

private:
    Ui::searching *ui;
};

#endif // SEARCHING_H
