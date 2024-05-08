#ifndef FAVLEAGUE_H
#define FAVLEAGUE_H

#include <QDialog>

namespace Ui {
class favleague;
}

class favleague : public QDialog
{
    Q_OBJECT

public:
    explicit favleague(QWidget *parent = nullptr);
    ~favleague();

private slots:
    void on_pushButton_clicked();

private:
    Ui::favleague *ui;
};

#endif // FAVLEAGUE_H
