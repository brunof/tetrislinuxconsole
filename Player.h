#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include <vector>

class BasicForm;
class ComplexForm;

using namespace std;

class Player {
	string *_name;
	vector<BasicForm *> *_nexts;
	ComplexForm *_block;

public:
	Player();
	~Player();
	
	string *name() { return this->_name; };

	ComplexForm *block() { return this->_block; };
	vector<BasicForm *> *nexts() { return this->_nexts; };
};

#endif
