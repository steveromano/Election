#include "Vote.h"

#include <iostream>
#include <string>

using namespace std;

Vote::Vote(string voterName, int voterID){
	name = voterName;
	id = voterID;
	party = "Independent";
}

Vote::Vote(string voterName, int voterID, string polParty){
	name = voterName;
	id = voterID;
	party = polParty;
}

string Vote::getName() const{
	return name;
}

int Vote::getID() const{
	return id;
}

string Vote::getParty(){
	return party;
}

void Vote::setAffiliation(string newParty){
	party = newParty;
}