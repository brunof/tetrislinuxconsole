#include "BasicForm.h"
#include "ComplexForm.h"

int main( int argc, const char* argv[] ) {
	BasicForm *f1 = new BasicForm();
	ComplexForm *f2 = new ComplexForm();
	Form * f3 = f1;
	return 0;
};

