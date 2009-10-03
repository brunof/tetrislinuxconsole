#ifndef __DIE_HPP__
#define __DIE_HPP__

#include <vector>
#include <cstdlib>
#include <ctime>  

using namespace std;

template <class BASIC>
class Die {
	typedef vector<BASIC *> t_options;
	t_options *_options;
public:

	Die(): _options(new t_options()) { srand((unsigned)time(0)); };
	~Die() {
		delete this->options();
	};
	
	t_options *options() { return this->_options; };
	
	void registerOption(BASIC *anOption) {
		this->options()->push_back(anOption);
	};
	int throwRandomNumberBetween(int min, int max) {
		return (rand()%(max-min+1))+min;
	};
	BASIC *throwRandomOption() {
		return this->options()->at(this->throwRandomNumberBetween(0,this->options()->size() - 1));
	}
	BASIC *throwAndReturnCopy() {
		return this->throwRandomOption();
		// TODO: 1* return a copy from that object.
	}
};

#endif
