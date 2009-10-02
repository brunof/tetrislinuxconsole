#ifndef __GAME_H__
#define __GAME_H__

#include <vector>

class Player;

using namespace std;

class Game {
	vector<Player *> *_players;

public:
	Game();
	~Game();
	
	vector<Player *> *players() { return this->_players; };
};

#endif
