#include "FormFactory.h"
#include "Die.hpp"
#include "../model/forms/basic/BasicForm.h"
#include "../model/forms/basic/StickBasicForm.h"
#include "../model/forms/basic/SnakeBasicForm.h"
#include "../model/forms/basic/BoxBasicForm.h"

FormFactory::FormFactory(): _formDie(new t_formDie()), _positionDie(new t_positionDie) {
	this->initializeFormDie();
	this->initializePositionDie();
}

void FormFactory::initializeFormDie() {
	this->formDie()->registerOption(new StickBasicForm());
	this->formDie()->registerOption(new SnakeBasicForm());
	this->formDie()->registerOption(new BoxBasicForm());
}

void FormFactory::initializePositionDie() {
	//TODO: Create a list of points to be moved
	//this->positionDie()->
}

BasicForm *FormFactory::makeNext() {
	//TODO: Modify the obtained form variables: position, color, etc.
	return this->formDie()->throwAndReturnCopy();
}
