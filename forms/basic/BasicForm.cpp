#include "BasicForm.h"
#include "../complex/ComplexForm.h"

BasicForm::BasicForm(): _positions(new vector<point *>()) {
}

point &BasicForm::length() {
}

BasicForm::~BasicForm() {
	vector<point *> *v = this->positions();
	for (vector<point *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}

ComplexForm *BasicForm::mixWith(BasicForm * aBasicForm) {
	ComplexForm *aComplexForm = new ComplexForm();
	aComplexForm->mixWith(this);
	aComplexForm->mixWith(aBasicForm);
	return aComplexForm;
}

ComplexForm *BasicForm::mixWith(ComplexForm *aComplexForm) {
	aComplexForm->mixWith(this);
	return aComplexForm;
}

