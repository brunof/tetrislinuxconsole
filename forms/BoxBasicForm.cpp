#include "BoxBasicForm.h"

BoxBasicForm::BoxBasicForm() {
	this->_positions = new vector<point *>();
	this->_positions->push_back(new point(1,1));
	this->_positions->push_back(new point(1,2));
	this->_positions->push_back(new point(2,1));
	this->_positions->push_back(new point(2,2));
}
