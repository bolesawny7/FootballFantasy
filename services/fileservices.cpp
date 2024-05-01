#include "fileservices.h"
#include <QString>
#include <QtCore>
#include <QFileInfo>
#include <vector>
#include "../models/team.h"
fileServices::fileServices() {}
vector <Team> teams;
vector<Team> fileServices::loadTeam(){

    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);

    QFile file(thisFilePathAbs.absolutePath()+"/data/teams.json");

    qDebug() << thisFilePathAbs.absolutePath();

    if(file.open(QIODevice::ReadOnly)){
        QByteArray Bytes = file.readAll();
        file.close();
        qDebug()<<"here";
        QJsonParseError JsonError;
        QJsonDocument Document =QJsonDocument::fromJson(Bytes, &JsonError);

        if(JsonError.error != QJsonParseError::NoError){
            qDebug() << "Error is : " << JsonError.errorString();
            return teams;
        }
        else {
            qDebug() << "no error";
        }
        // if (Document.isArray())
        // {
        //     QJsonArray arr = Document.array();

        //     int id;
        //     QJsonObject team;
        //     QString teamName;

        //     for(auto i:arr)
        //     {
        //         team = i.toObject();
        //         teamName = team.value("team_name").toString();
        //         string name = teamName.toStdString();
        //         Team newteam(name);
        //         teams.push_back(newteam);
        //     }
        // }
        return teams;
    }
}
