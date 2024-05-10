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

private:
    Ui::teamandpos *ui;
};

#endif // TEAMANDPOS_H
