#ifndef MYTEAM_H
#define MYTEAM_H

#include <QDialog>

namespace Ui {
class myteam;
}

class myteam : public QDialog
{
    Q_OBJECT

public:
    explicit myteam(QWidget *parent = nullptr);
    ~myteam();

private slots:
    void on_save_clicked();

    void on_LeaguesButton_clicked();

private:
    Ui::myteam *ui;
};

#endif // MYTEAM_H
