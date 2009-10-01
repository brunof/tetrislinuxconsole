#ifndef __BASICFORM_H__
#define __BASICFORM_H__

#include "Form.h"
#include <vector>

using namespace std;
class ComplexForm;

class BasicForm: public Form {
	int _graph;
	vector<point *> *_positions;
public:
	BasicForm();
	~BasicForm();

	virtual point &length();
	vector<point *> * positions() { return this->_positions; };

	ComplexForm *mixWith(BasicForm *);
	ComplexForm *mixWith(ComplexForm *);
};

#endif
