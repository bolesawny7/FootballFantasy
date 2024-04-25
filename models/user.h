#ifndef USER_H
#define USER_H
#include"string"
#include "../Structs/signupStruct.cpp"
#include "../Structs/loginStruct.cpp"
class User
{
private:
    string id;
    string league;
    string firstName;
    string lastName;
    string email;
    string password;
    string gender;
public:
    User(signupStruct signupDto);
    string getEmail();
    string getPassword();
};

#endif // USER_H
