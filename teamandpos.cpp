#include "teamandpos.h"
#include "ui_teamandpos.h"
#include "services/adminservice.h"
#include "services/fileservices.h"
#include "models/team.h"
#include "utils/fantasycontext.h"
#include "updatepoints.h"
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

void teamandpos::on_pushButton_clicked()
{
    FantasyContext::searchingPos=ui->positionComboBox->currentText().toStdString();
    FantasyContext::searchingTeam=ui->teamComboBox->currentText().toStdString();
    if(ui->updateComboBox->currentText()=="points"){
        updatepoints points;
        points.setModal(true);
        close();
        points.exec();
    }
}

