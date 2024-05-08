#ifndef SEARCHING_H
#define SEARCHING_H

#include <QDialog>

namespace Ui {
class searching;
}

class searching : public QDialog
{
    Q_OBJECT

public:
    explicit searching(QWidget *parent = nullptr);
    ~searching();

private slots:

    void on_pushButton_clicked();

private:
    Ui::searching *ui;
};

#endif // SEARCHING_H
