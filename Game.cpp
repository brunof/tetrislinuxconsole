#include "Game.h"
#include "Player.h"

Game::Game(): _players(new vector<Player *>()) {
	this->players()->push_back(new Player);
}

Game::~Game() {
	vector<Player *> *v = this->players();
	for (vector<Player *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}
