#ifndef __GAME_H__
#define __GAME_H__

#include <vector>

class Player;
class FormFactory;

using namespace std;

typedef vector<Player *> t_players;

class Game {
	t_players *_players;
	t_players *_winners;
	FormFactory *_formFactory;

public:
	Game();
	~Game();
	
	t_players *players() { return this->_players; };
	t_players *winners() { return this->_winners; };

	void deleteElementsFrom(t_players *);
	void start();
	void stop();
};

#endif
