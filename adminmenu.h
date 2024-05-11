#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>

namespace Ui {
class adminmenu;
}

class adminmenu : public QDialog
{
    Q_OBJECT

public:
    explicit adminmenu(QWidget *parent = nullptr);
    ~adminmenu();

private slots:
    void on_updatepoints_clicked();

    void on_logout_clicked();

private:
    Ui::adminmenu *ui;
};

#endif // ADMINMENU_H
