#ifndef __GAME_H__
#define __GAME_H__

#include <vector>

class Player;

using namespace std;

typedef vector<Player *> t_players;

class Game {
	t_players *_players;

public:
	Game();
	~Game();
	
	t_players *players() { return this->_players; };
};

#endif
