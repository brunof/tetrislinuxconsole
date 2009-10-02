#include "Player.h"
#include "forms/basic/BasicForm.h"
#include "forms/complex/ComplexForm.h"

Player::Player(): _name(new string()), _nexts(new t_basicForms()), _block(new ComplexForm()) {
}

Player::~Player() {
	delete this->name();
	t_basicForms *v = this->nexts();
	for (t_basicForms::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
	delete this->block();
}
