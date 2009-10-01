#include "StickBasicForm.h"

StickBasicForm::StickBasicForm() {
	this->_positions = new vector<point *>();
	this->_positions->push_back(new point(1,1));
	this->_positions->push_back(new point(1,2));
	this->_positions->push_back(new point(1,3));
	this->_positions->push_back(new point(1,4));
}
