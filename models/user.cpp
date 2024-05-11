#include "user.h"
#include <string>
string User::getUserName()
{
    return userName;
}

void User::setUserName(string newUserName)
{
    userName = newUserName;
}

string User::getLeague()
{
    return league;
}

void User::setLeague(string newLeague)
{
    league = newLeague;
}

User::User(signupStruct signupDto) {
    this->league = signupDto.league;
    this->userName=signupDto.userName;
    this->email = signupDto.email;
    this->password = signupDto.password;
    this->favTeam=signupDto.favTeam;
    this->role=signupDto.role;

}


User::User(string Lleague,string LuserName,string Lemail,string Lpassword,string LfavTeam,string Lrole){
    league = Lleague;
    userName=LuserName;
    email = Lemail;
    password = Lpassword;
    favTeam=LfavTeam;
    role=Lrole;
}
string User:: getEmail(){
    return email;
}
string User:: getPassword(){
    return password;
}
string User::getRole()
{
    return role;
}

void User::setRole(string newRole)
{
    role = newRole;
}
