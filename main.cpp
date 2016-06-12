#include <iostream>
#include "Vote.h"
#include <string>

using namespace std;

int main(){

	Vote Bob("Bob", 123);
	cout << Bob.getName() << Bob.getID() << Bob.getParty();
	Bob.setAffiliation("Democrat");
	cout << Bob.getParty();
	return 0;
}