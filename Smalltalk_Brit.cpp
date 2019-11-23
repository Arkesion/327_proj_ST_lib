/*
 * Smalltalk_Brit.cpp
 * Kevin Quirici
 */

#include "includes/Smalltalk_Brit.h"
#include "includes/constants.h"

using namespace std;

Smalltalk_Brit::Smalltalk_Brit(int iPerson) : Smalltalk(BRIT, iPerson) {
	this->populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit() { }

void Smalltalk_Brit::populatePhrases() {
	this->mySmallTalk.push_back(BRIT_1);
	this->mySmallTalk.push_back(BRIT_2);
	this->mySmallTalk.push_back(BRIT_3);
	this->mySmallTalk.push_back(BRIT_4);
	this->mySmallTalk.push_back(BRIT_5);
	this->mySmallTalk.push_back(BRIT_6);
	this->mySmallTalk.push_back(BRIT_7);
}
