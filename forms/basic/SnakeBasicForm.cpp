#include "SnakeBasicForm.h"

SnakeBasicForm::SnakeBasicForm() {
	this->positions()->push_back(new point(1,1));
	this->positions()->push_back(new point(1,2));
	this->positions()->push_back(new point(2,2));
	this->positions()->push_back(new point(2,3));
}
