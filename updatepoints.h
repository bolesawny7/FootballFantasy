#ifndef UPDATEPOINTS_H
#define UPDATEPOINTS_H
#include "services/adminservice.h"
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

private:
    Ui::updatepoints *ui;
};

#endif // UPDATEPOINTS_H
