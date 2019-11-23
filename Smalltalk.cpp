/*
 * Smalltalk.cpp
 *
 * Kevin Quirici
 */

#include "./includes/Smalltalk.h"

using namespace std;

Smalltalk::Smalltalk(string _myNationality, int _iPerson) {
	nationality = _myNationality;
	iPerson = _iPerson;
	current_phrase = 0;
	pWatch = 0;
};

Smalltalk::~Smalltalk(void) {

}

string Smalltalk::saySomething() {
	return "";
}

string Smalltalk::getTime() {
	return "";
}

unique_ptr<Watch> takeWatch() {
	return nullptr;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	return false;
}

virtual void populatePhrases() {

}
