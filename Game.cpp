#include "Game.h"
#include "Player.h"

Game::Game(): _players(new t_players()) {
	this->players()->push_back(new Player);
}

Game::~Game() {
	t_players *v = this->players();
	for (t_players::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}
