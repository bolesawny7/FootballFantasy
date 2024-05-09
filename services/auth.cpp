#include "auth.h"
#include "../models/user.h"
// #include "userservice.h"
#include "../models/player.h"
#include "../utils/fantasycontext.h"
#include "iostream"
Auth::Auth() {}
void Auth::signup(signupStruct signupDto){
    if(signupDto.role == "player"){
        Player player(signupDto);
        player_service.setPlayer(player);
        FantasyContext::setActivePlayer(player);
    }else if(signupDto.role == "admin"){
        User user(signupDto);
        user_services.setUser(user);
        FantasyContext::setAdmin(user);
    }
}
bool Auth::login(loginStruct loginDto){
    if(loginDto.role == "player")
        player_service.findPlayer(loginDto);
    else if(loginDto.role == "admin")
        user_services.findUser(loginDto);
}
