#include "BasicForm.h"

BasicForm::BasicForm(): _positions(new vector<point *>()) {
}

point &BasicForm::length() {
}

BasicForm::~BasicForm() {
	vector<point *> *v = this->_positions;
	for (vector<point *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}
