#include <iostream>
#include "Vote.h"
#include <string>
#include <vector>

using namespace std;

int main(){

	Vote Bob("Bob", 123);
	//cout << Bob.getName() << Bob.getID() << Bob.getParty();
	//Bob.setAffiliation("Democrat");
	//cout << Bob.getParty();
	vector<string> bobsvotes;
	bobsvotes.push_back("Bernie");
	bobsvotes.push_back("Hilary");
	bobsvotes.push_back("Trump");
	bobsvotes.push_back("Johnson");
	bobsvotes.push_back("Cruz");
	Bob.castVote(bobsvotes);
	cout << Bob.getVote() << endl;
	Bob.pushVoteNum();
	cout << Bob.getVote() << endl;

	return 0;
}
