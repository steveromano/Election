#include "Vote.h"

#include <iostream>
#include <string>
#include <vector>


using namespace std;

Vote::Vote(string voterName, int voterID){
	name = voterName;
	id = voterID;
	party = "Independent";
	voteNum = 0;
}

Vote::Vote(string voterName, int voterID, string polParty){
	name = voterName;
	id = voterID;
	party = polParty;
	voteNum = 0;
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

void Vote::castVote(vector<string> casted){
	votes = casted;
}

string Vote::getVote(){
	if (voteNum < votes.size()){
		return votes[voteNum];
	} else {
		return "NO VOTE";
	}
}

void Vote::pushVoteNum(){
	if (voteNum < votes.size()-1){
		voteNum ++;
	} else {
		voteNum = 6;
	}
}
