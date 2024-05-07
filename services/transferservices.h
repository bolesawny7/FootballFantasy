#ifndef TRANSFERSERVICES_H
#define TRANSFERSERVICES_H
#include "../models/footballer.h"
#include <QString>
class transferservices
{
public:
    transferservices();
    vector <Footballer> playerSearch(QString playerName);
};

#endif // TRANSFERSERVICES_H
