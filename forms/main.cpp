#include "BasicForm.h"
#include "ComplexForm.h"
#include "StickBasicForm.h"
#include "BoxBasicForm.h"
#include "SnakeBasicForm.h"

int main( int argc, const char* argv[] ) {
	BasicForm *bf1 = new StickBasicForm();
	BasicForm *bf2 = new BoxBasicForm();
	ComplexForm *cf1 = new ComplexForm();
	Form * f1 = bf1;
	delete f1; // Borra a bf1 tambien.
	delete cf1;
	delete bf2;
	return 0;
};

