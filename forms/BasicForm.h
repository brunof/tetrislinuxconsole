#ifndef __BASICFORM_H__
#define __BASICFORM_h__

#include "Form.h"
#include <boost/numeric/ublas/vector.hpp>

using namespace boost::numeric::ublas;

class BasicForm: public Form {
	vector<point *> &_positions;
	int _graph;
public:
	BasicForm();
	virtual point &length();
};

#endif
