#ifndef __FORM_H__
#define __FORM_H__

#include "Point.hpp"

typedef Point<char,char> point;

class Form {
public:
	virtual point &length() = 0;
};

#endif
