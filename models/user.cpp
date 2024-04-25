#include "user.h"
#include <string>
User::User(signupStruct signupDto) {
    this->league = signupDto.league;
    this->firstName = signupDto.firstName;
    this->lastName = signupDto.lastName;
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
