#include "model/Player.h"
#include "model/Game.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main( int argc, const char* argv[] ) {
	Player *p1 = new Player();
	stringstream ss;
	ss << "Eloy";
	ss >> *(p1->name());
	std::cout << *(p1->name()) << std::endl;
	Game * g = new Game();
	g->players()->push_back(p1);
	delete g;
	return 0;
};

