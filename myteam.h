#ifndef MYTEAM_H
#define MYTEAM_H

#include <QDialog>
#include "models/player.h"
namespace Ui {
class myteam;
}

class myteam : public QDialog
{
    Q_OBJECT

public:
    explicit myteam(QWidget *parent = nullptr);
    void refresh();
    ~myteam();

private slots:
    void on_LeaguesButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::myteam *ui;
};

#endif // MYTEAM_H
