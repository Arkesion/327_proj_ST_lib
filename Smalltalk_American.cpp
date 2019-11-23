/*
 * Smalltalk_American.cpp
 *
 * Kevin Quirici
 */

#include "includes/Smalltalk_American.h"
#include "includes/constants.h"

using namespace std;

Smalltalk_American::Smalltalk_American(int _iPerson):Smalltalk(AMERICAN, iPerson){
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) : Smalltalk(myNationality, iPerson) { }

Smalltalk_American::~Smalltalk_American() { }

void Smalltalk_American::populatePhrases() {
	this->mySmallTalk.push_back(AMERICAN_PHRASE_1);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_2);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_3);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_4);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
