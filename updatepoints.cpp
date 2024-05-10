#include "updatepoints.h"
#include "ui_updatepoints.h"
#include <vector>
#include "services/fileservices.h"
#include "models/footballer.h"
updatepoints::updatepoints(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updatepoints)
{
}

updatepoints::~updatepoints()
{
    delete ui;
}
