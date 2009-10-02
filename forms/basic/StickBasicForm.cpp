#include "StickBasicForm.h"

StickBasicForm::StickBasicForm(): BasicForm() {
	this->positions()->push_back(new t_point(1,1));
	this->positions()->push_back(new t_point(1,2));
	this->positions()->push_back(new t_point(1,3));
	this->positions()->push_back(new t_point(1,4));
}
