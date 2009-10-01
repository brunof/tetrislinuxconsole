#ifndef __COMPLEXFORM_H__
#define __COMPLEXFORM_H__

#include "Form.h"
#include <vector>

using namespace std;

class ComplexForm: public Form {
	vector<Form *> *_forms;
	point *_length;
public:
	ComplexForm();
	virtual point &length() { return *(this->_length); };
	void length(point &length) { this->_length = &length; };
};

#endif
