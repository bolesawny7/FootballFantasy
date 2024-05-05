#ifndef FILESERVICES_H
#define FILESERVICES_H
#include <vector>
#include "../models/team.h"
#include "../models/footballer.h"
class fileServices
{
public:
    fileServices();
    vector<Team>loadTeam();
    vector<Footballer>loadFootballers(string position);
};

#endif // FILESERVICES_H
