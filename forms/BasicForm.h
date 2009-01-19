#ifndef __BASICFORM_H__
#define __BASICFORM_h__

#include "Form.h"

class BasicForm: public Form {
	int positions;
	int graph;
public:
	BasicForm();
	virtual point &length();
	virtual void initialize();
};

#endif
