#ifndef TRANSFERSERVICES_H
#define TRANSFERSERVICES_H
#include "../models/footballer.h"
#include <QString>
class transferservices
{
public:
     static QString searchValue;
    QString getSearchValue();
    void setSearchValue(QString position);
    transferservices();
    vector <Footballer> playerSearch(QString playerName);
};

#endif // TRANSFERSERVICES_H
