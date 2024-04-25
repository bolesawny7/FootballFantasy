#include "user.h"
#include <string>
User::User(signupStruct signupDto) {
    this->league = signupDto.league;
    this->userName=signupDto.userName;
    this->email = signupDto.email;
    this->password = signupDto.password;
    this->gender = signupDto.gender;
}

string User:: getEmail(){
    return email;
}
string User:: getPassword(){
    return password;
}
