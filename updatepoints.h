#ifndef UPDATEPOINTS_H
#define UPDATEPOINTS_H

#include <QDialog>

namespace Ui {
class updatepoints;
}

class updatepoints : public QDialog
{
    Q_OBJECT

public:
    explicit updatepoints(QWidget *parent = nullptr);
    ~updatepoints();

private slots:
    void on_addpoints_clicked();

    void on_back_clicked();

private:
    Ui::updatepoints *ui;
};

#endif // UPDATEPOINTS_H
