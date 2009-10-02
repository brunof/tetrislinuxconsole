#include "forms/basic/StickBasicForm.h"
#include "forms/basic/BoxBasicForm.h"
#include "forms/basic/SnakeBasicForm.h"
#include "forms/complex/ComplexForm.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main( int argc, const char* argv[] ) {
	BasicForm *bf1 = new StickBasicForm();
	BasicForm *bf2 = new BoxBasicForm();
	BasicForm *bf3 = new SnakeBasicForm();
	Player *p1 = new Player();
	stringstream ss;
	ss << "Eloy";
	ss >> *(p1->name());
	std::cout << *(p1->name()) << std::endl;
	p1->block()->mixWith(bf1);
	bf2->mixWith(p1->block());
	p1->block()->mixWith(bf3);
	Form * f1 = bf1;
	delete p1;
	delete f1; // Borra a bf1 tambien.
	delete bf2;
	delete bf3;
	return 0;
};

