#include "Player.h"
#include "forms/basic/BasicForm.h"
#include "forms/complex/ComplexForm.h"

Player::Player() {
	this->_name = new string();
	this->_nexts = new vector<BasicForm *>();
	this->_block = new ComplexForm();
}

Player::~Player() {
	delete this->name();
	vector<BasicForm *> *v = this->nexts();
	for (vector<BasicForm *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
	delete this->block();
}
