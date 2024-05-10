#ifndef TEAMANDPOS_H
#define TEAMANDPOS_H

#include <QDialog>

namespace Ui {
class teamandpos;
}

class teamandpos : public QDialog
{
    Q_OBJECT

public:
    explicit teamandpos(QWidget *parent = nullptr);
    ~teamandpos();

private slots:
    void on_pushButton_clicked();

private:
    Ui::teamandpos *ui;
};

#endif // TEAMANDPOS_H
