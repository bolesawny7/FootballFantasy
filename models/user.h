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
    string userName;
    string email;
    string password;
    string gender;
    string favTeam;
    string role;

public:
    User(signupStruct signupDto);
    User(string league,string userName,string email,string password,string favTeam,string role);
    string getEmail();
    string getPassword();
    string getRole();
    void setRole(string newRole);
    string getUserName();
    void setUserName(string newUserName);
    string getLeague() ;
    void setLeague( string newLeague);
};

#endif // USER_H
