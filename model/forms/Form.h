#ifndef __FORM_H__
#define __FORM_H__

#include "Point.hpp"

typedef Point<char,char> t_point;

class ComplexForm;
class BasicForm;

class Form {
public:
	virtual t_point *length() = 0;
	virtual ComplexForm *mixWith(BasicForm *) = 0;
	virtual ComplexForm *mixWith(ComplexForm *) = 0;
};

#endif
