#include "ComplexForm.h"
#include "../basic/BasicForm.h"

ComplexForm::ComplexForm(): _forms(new t_forms()) {
}

ComplexForm::~ComplexForm() {
	t_forms *v = this->forms();
	for (t_forms::iterator it = v->begin(); it!=v->end(); ++it) {
		// HACK: Shuld be Form, but an abstract class can not define a destructor.
		delete (BasicForm *) *it;
	}
	delete v;
}

ComplexForm *ComplexForm::mixWith(BasicForm *aBasicForm) {
	this->forms()->push_back(aBasicForm);
	return this;
}

ComplexForm *ComplexForm::mixWith(ComplexForm *aComplexForm) {
	if (aComplexForm != this) {
		t_forms *v = aComplexForm->forms();
		for(t_forms::iterator it = v->begin(); it!=v->end(); ++it) {
			(*it)->mixWith(this);
		}
	}
	return this;
}
