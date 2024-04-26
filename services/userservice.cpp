#include "userservice.h"
#include <iostream>
 vector<User> UserService::users;
UserService::UserService(){}
void UserService:: setUser(User user){
    users.push_back(user);
    for(int i = 0; i < users.size(); i++){
        cout << users[i].getEmail() << endl;
    }
}

bool UserService:: findUser(loginStruct loginDto){
    for(int i = 0; i < users.size(); i++){
        cout << users[i].getEmail() << endl;
    }
    for(int i = 0; i < users.size(); i++){
        cout << users[i].getEmail() << endl << loginDto.email << endl << loginDto.password << endl << users[i].getPassword() << endl;
        if(users[i].getEmail() == loginDto.email){
            if(users[i].getPassword() == loginDto.password)
                return true;
            else
                return false;
        }
    }
    return false;
}
