#ifndef VOTE_H
#define VOTE_H


#include <iostream>
#include <string>

using namespace std;

class Vote
{
	string name;
	int id;
	string party;
public:
	//Constructors
	Vote(string voterName, int voterID);
	Vote(string voterName, int voterID, string polParty);
	//Accessors
	string getName() const;
	int getID() const;
	string getParty();
	//Setters
	void setAffiliation(string newParty);
};

#endif