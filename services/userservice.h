#ifndef USERSERVICE_H
#define USERSERVICE_H
#include "../models/user.h"
#include <vector>
using namespace std;
class UserService
{
private:
     static vector<User>users;
public:
    UserService();
    void setUser(User user);
    bool findUser(loginStruct loginDto);
};

#endif // USERSERVICE_H
