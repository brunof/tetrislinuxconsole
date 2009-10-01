#ifndef __BASICFORM_H__
#define __BASICFORM_H__

#include "Form.h"
#include <vector>

using namespace std;

class BasicForm: public Form {
	int _graph;
protected:
	vector<point *> *_positions;
public:
	BasicForm();
	~BasicForm();
	virtual point &length();
};

#endif
