#include "auth.h"
#include "../models/user.h"
#include "userservice.h"
#include "iostream"
Auth::Auth() {}
void Auth::signup(signupStruct signupDto){
    User user(signupDto);
    user_services.setUser(user);
}
bool Auth::login(loginStruct loginDto){
    return user_services.findUser(loginDto);
    cout << user_services.findUser(loginDto);
}
