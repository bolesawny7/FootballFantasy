#include "teamandpos.h"
#include "ui_teamandpos.h"
#include "../services/fileservices.h"
#include "../models/team.h"
#include <vector>
teamandpos::teamandpos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teamandpos)
{
    ui->setupUi(this);
    fileServices files;
    vector <Team> teams=files.loadTeam();
    for(auto team:teams){
        QString teamName= QString::fromStdString(team.getTeamName());
        ui->teamComboBox->addItem(teamName);
    }
}

teamandpos::~teamandpos()
{
    delete ui;
}
