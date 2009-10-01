#include "ComplexForm.h"
#include "BasicForm.h"

ComplexForm::ComplexForm(): _forms(new vector<Form *>()) {
}

ComplexForm::~ComplexForm() {
	vector<Form *> *v = this->forms();
	for (vector<Form *>::iterator it = v->begin(); it!=v->end(); ++it) {
		delete *it;
	}
	delete v;
}

ComplexForm *ComplexForm::mixWith(BasicForm *aBasicForm) {
	this->forms()->push_back(aBasicForm);
	return this;
}

ComplexForm *ComplexForm::mixWith(ComplexForm *aComplexForm) {
	if (aComplexForm != this) {
		vector<Form *> *v = aComplexForm->forms();
		for(vector<Form *>::iterator it = v->begin(); it!=v->end(); ++it) {
			(*it)->mixWith(this);
		}
	}
	return this;
}
