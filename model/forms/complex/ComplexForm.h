#ifndef __COMPLEXFORM_H__
#define __COMPLEXFORM_H__

#include "../Form.h"
#include <vector>

using namespace std;

typedef vector<Form *> t_forms;

class BasicForm;

class ComplexForm: public Form {
	t_forms *_forms;
	t_point *_length;
public:
	ComplexForm();
	~ComplexForm();

	virtual t_point *length() { return this->_length; };
	void length(t_point *length) { this->_length = length; };
	t_forms *forms() { return this->_forms; };

	ComplexForm *mixWith(BasicForm *);
	ComplexForm *mixWith(ComplexForm *);
};

#endif
