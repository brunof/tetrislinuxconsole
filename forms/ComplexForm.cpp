#include "ComplexForm.h"

ComplexForm::ComplexForm(): _forms(new vector<Form *>()) {
}

ComplexForm::~ComplexForm() {
	vector<Form *> *v = this->_forms;
	for (vector<Form *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}
