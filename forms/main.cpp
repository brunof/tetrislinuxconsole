#include "BasicForm.h"
#include "ComplexForm.h"

int main( int argc, const char* argv[] ) {
	BasicForm *f1 = new BasicForm();
	ComplexForm *f2 = new ComplexForm();
	Form * f3 = f1;
	delete f1; // Borra a f3 tambien.
	delete f2;
	return 0;
};

