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
    }else if(signupDto.role == "admin"){
        User user(signupDto);
        user_services.setUser(user);
        FantasyContext::setAdmin(user);
    }
}
int Auth::login(loginStruct loginDto){
    bool pl = player_service.findPlayer(loginDto);
    bool ad = user_services.findUser(loginDto);
    if(pl){
        return 0;
    }else if(ad){
        return 1;
    }
    return 2;
}
