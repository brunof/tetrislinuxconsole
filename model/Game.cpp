#include "Game.h"
#include "Player.h"
#include "FormFactory.h"

Game::Game(): _formFactory(new FormFactory()) , _players(new t_players()), _winners(new t_players())  {
	this->players()->push_back(new Player);
	//TODO: Initialize tick process stoped, and save in an instance variable.
	//this->initializeTick();
}

Game::~Game() {
	this->deleteElementsFrom(this->players());
	delete this->players();
	this->deleteElementsFrom(this->winners());
	delete this->winners();
}

void Game::deleteElementsFrom(t_players *v) {
	for (t_players::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}	
}

void Game::start() {

}

void Game::stop() {

}
