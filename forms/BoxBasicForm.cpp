#include "BoxBasicForm.h"

BoxBasicForm::BoxBasicForm() {
	this->positions()->push_back(new point(1,1));
	this->positions()->push_back(new point(1,2));
	this->positions()->push_back(new point(2,1));
	this->positions()->push_back(new point(2,2));
}
