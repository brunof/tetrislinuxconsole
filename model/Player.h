#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include <vector>

class BasicForm;
class ComplexForm;

using namespace std;

typedef vector<BasicForm *> t_basicForms;

class Player {
	string *_name;
	t_basicForms *_nexts;
	ComplexForm *_block;

public:
	Player();
	~Player();
	
	string *name() { return this->_name; };

	ComplexForm *block() { return this->_block; };
	t_basicForms *nexts() { return this->_nexts; };
};

#endif
