#include "BasicForm.h"
#include "ComplexForm.h"
#include "StickBasicForm.h"
#include "BoxBasicForm.h"
#include "SnakeBasicForm.h"

int main( int argc, const char* argv[] ) {
	BasicForm *bf1 = new StickBasicForm();
	BasicForm *bf2 = new BoxBasicForm();
	BasicForm *bf3 = new SnakeBasicForm();
	ComplexForm *cf1 = new ComplexForm();
	cf1->mixWith(bf1);
	bf2->mixWith(cf1);
	cf1->mixWith(bf3);
	Form * f1 = bf1;
	delete cf1;
	delete f1; // Borra a bf1 tambien.
	delete bf2;
	delete bf3;
	return 0;
};

