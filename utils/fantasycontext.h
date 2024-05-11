#ifndef FANTASYCONTEXYSERVICE_H
#define FANTASYCONTEXYSERVICE_H
#include "../models/player.h"
class FantasyContext
{
private:
    static Player player;
    static User admin;
    // static vector<Player>players;
    // static vector <League> leagues;
public:
    static int index;
    FantasyContext();
    /* => getters <= */
    static Player getActivePlayer();
    static User getAdmin();
    // static vector<Player> getActivePlayers();
    /* => setters <=*/
    static void setActivePlayer(Player player,int index);
    static void savePlayer();
    static void setAdmin(User newAdmin);

    // static void setPlayers(vector<Player> players);
};

#endif // FANTASYCONTEXYSERVICE_H
