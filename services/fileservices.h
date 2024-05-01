#ifndef FILESERVICES_H
#define FILESERVICES_H
#include <vector>
#include "../models/team.h"
class fileServices
{
public:
    fileServices();
    vector<Team>loadTeam();
};

#endif // FILESERVICES_H
