#ifndef __BASICFORM_H__
#define __BASICFORM_H__

#include "../Form.h"
#include <vector>

using namespace std;

typedef vector<t_point *> t_points;

class ComplexForm;

class BasicForm: public Form {
	int _graph;
	t_points *_positions;
public:
	BasicForm();
	~BasicForm();

	virtual t_point *length();
	t_points * positions() { return this->_positions; };

	ComplexForm *mixWith(BasicForm *);
	ComplexForm *mixWith(ComplexForm *);
};

#endif
