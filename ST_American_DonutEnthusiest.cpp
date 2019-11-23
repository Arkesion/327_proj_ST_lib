/*
 * ST_American_DonutEnthusiest
 *
 * Kevin Quirici
 */

#include "includes/ST_American_DonutEnthusiest.h"
#include "includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) {
	this -> populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest() {

}

void ST_American_DonutEnthusiest::populatePhrases() {
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
