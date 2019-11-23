/*
 * Smalltalk_American.cpp
 *
 * Kevin Quirici
 */

#include "includes/Smalltalk_American.h"

using namespace std;

Smalltalk_American::Smalltalk_American(int _iPerson) {
	iPerson = _iPerson;
}

Smalltalk_American::Smalltalk_American(string _nationality, int _iPerson) {
	nationality = _nationality;
	iPerson = _iPerson;
}

Smalltalk_American::~Smalltalk_American(void) {
	nationality = "";
	iPerson = 0;
}

virtual void populatePhrases() {

}
