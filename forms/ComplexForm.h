#ifndef __COMPLEXFORM_H__
#define __COMPLEXFORM_h__

#include "Form.h"
#include <boost/numeric/ublas/vector.hpp>

using namespace boost::numeric::ublas;

class ComplexForm: public Form {
	vector<Form *> &_forms;
	point *_length;
public:
	ComplexForm();
	virtual point &length() { return *(this->_length); };
	void length(point &length) { this->_length = &length; };
};

#endif
