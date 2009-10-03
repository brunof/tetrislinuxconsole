#ifndef __FORMFACTORY_H__
#define __FORMFACTORY_H__

#include <vector>
#include "Die.hpp"

using namespace std;

class BasicForm;
class point;

typedef Die<BasicForm> t_formDie;
typedef Die<point> t_positionDie;

class FormFactory {
	t_formDie *_formDie;
	t_positionDie *_positionDie;

public:
	FormFactory();

	t_formDie *formDie() { return this->_formDie; };
	t_positionDie *positionDie() { return this->_positionDie; };

	void initializeFormDie();
	void initializePositionDie();

	BasicForm *makeNext();
};

#endif
