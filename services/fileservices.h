#ifndef FILESERVICES_H
#define FILESERVICES_H
#include <vector>
#include "../models/team.h"
#include "../models/footballer.h"
#include <map>
class fileServices
{
public:
    fileServices();
    vector<Team>loadTeam();
    map <string, vector<Footballer>> loadFootballers();
    void writeteams();
};

#endif // FILESERVICES_H
