#include "user.h"
#include <string>
User::User(signupStruct signupDto) {
    this->league = signupDto.league;
    this->userName=signupDto.userName;
    this->email = signupDto.email;
    this->password = signupDto.password;
    this->gender = signupDto.gender;
    this->favTeam=signupDto.favTeam;
    this->role=signupDto.role;

}

string User:: getEmail(){
    return email;
}
string User:: getPassword(){
    return password;
}


