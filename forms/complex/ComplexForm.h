#ifndef __COMPLEXFORM_H__
#define __COMPLEXFORM_H__

#include "../Form.h"
#include <vector>

using namespace std;

class BasicForm;

class ComplexForm: public Form {
	vector<Form *> *_forms;
	point *_length;
public:
	ComplexForm();
	~ComplexForm();

	virtual point &length() { return *(this->_length); };
	void length(point &length) { this->_length = &length; };
	vector<Form *> * forms() { return this->_forms; };

	ComplexForm *mixWith(BasicForm *);
	ComplexForm *mixWith(ComplexForm *);
};

#endif
