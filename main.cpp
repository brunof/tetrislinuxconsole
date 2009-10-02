#include "forms/basic/StickBasicForm.h"
#include "forms/basic/BoxBasicForm.h"
#include "forms/basic/SnakeBasicForm.h"
#include "forms/complex/ComplexForm.h"
#include "Player.h"
#include "Game.h"
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
	Game * g = new Game();
	g->players()->push_back(p1);
	delete g;
	return 0;
};

