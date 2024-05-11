#ifndef UPDATEPRICE_H
#define UPDATEPRICE_H

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

private:
    Ui::updateprice *ui;
};

#endif // UPDATEPRICE_H
