#ifndef HOME_H
#define HOME_H

#include <QDialog>

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_3_toggled(bool checked);

    void on_pushButton_3_clicked(bool checked);

private:
    Ui::Home *ui;
};

#endif // HOME_H
