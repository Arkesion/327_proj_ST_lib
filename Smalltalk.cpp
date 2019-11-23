/*
 * Smalltalk.cpp
 *
 * Kevin Quirici
 */

#include "./includes/Smalltalk.h"
#include "includes/constants.h"
#include "includes/Watch.h"

using namespace std;

Smalltalk::Smalltalk(std::string _myNationality, int _iPerson):nationality(_myNationality),iPerson(_iPerson),current_phrase(0),pWatch(nullptr) { }

Smalltalk::~Smalltalk(void) { pWatch = 0; }

string Smalltalk::saySomething() {
	std::string phrase = this->mySmallTalk[current_phrase];
	current_phrase = (current_phrase+1) % this->mySmallTalk.size();
	return phrase;
}

string Smalltalk::getTime() {
	if(this->pWatch) {
		std::string currentTime = this->pWatch->getTime();
		return THE_CURRENT_TIME_IS + currentTime;
	}
	return I_DO_NOT_HAVE_A_WATCH;
}

unique_ptr<Watch> Smalltalk::takeWatch() {
	unique_ptr<Watch> _watch = std::move(pWatch);
	return _watch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &watch) {
	if(this->pWatch == NULL) {
		this->pWatch = std::move(watch);
		return true;
	}
	return false;
}

