#include "SnakeBasicForm.h"

SnakeBasicForm::SnakeBasicForm() {
	this->_positions = new vector<point *>();
	this->_positions->push_back(new point(1,1));
	this->_positions->push_back(new point(1,2));
	this->_positions->push_back(new point(2,2));
	this->_positions->push_back(new point(2,3));
}
