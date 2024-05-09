#ifndef AUTH_H
#define AUTH_H
#include "../models/user.h"
#include "userservice.h"
#include "playersservice.h"
class Auth
{
private:
    UserService user_services;
    Playersservice player_service;
public:
    Auth();
    bool login(loginStruct loginDto);
    void signup(signupStruct signupDto);
};

#endif // AUTH_H
