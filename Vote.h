#ifndef VOTE_H
#define VOTE_H


#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Vote
{
	string name;
	int id;
	string party;
	vector<string> votes;
	int voteNum;

public:
	//Constructors
	Vote(string voterName, int voterID);
	Vote(string voterName, int voterID, string polParty);

	//Accessors
	string getName() const;
	int getID() const;
	string getParty();
	string getVote();
	
	//Setters
	void setAffiliation(string newParty);
	void castVote(vector<string> casted);
	void pushVoteNum();	
};

#endif	
