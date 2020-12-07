#include "guys/ElectricGuy.hpp"
#include "guys/FireGuy.hpp"
#include "guys/GrassGuy.hpp"
#include "guys/WaterGuy.hpp" 
#include <iostream>

using namespace std;

int main() {
	cout << "Welcome to the wonderful world of PokeGuys!" << endl;
	cout << "There comes a time in every Trainer's life where they must make a choice; " <<
	"what type of Guy with which they embark on their legendary journey!" << endl;
	string guySelection;
	while (guySelection != "1" || guySelection != "2" || guySelection != "3" || guySelection != "4") {	
		cout << "What'll it be, Trainer?!" << endl;
		cout << "1. ElectroGuy" << endl;
		cout << "2. FireGuy" << endl;
		cout << "3. GrassGuy" << endl;
		cout << "4. WaterGuy" << endl;
		cin >> guySelection;
		if (guySelection == "1" || guySelection == "2" || guySelection == "3" || guySelection == "4") {
			break;
		}
		cout << "Please pick a number 1-4!" << endl;
	}
	Guy* playerGuy;
	if(guySelection == "1") {
		guySelection = "ElectricGuy";
		playerGuy = new ElectricGuy();
	}
	if(guySelection == "2") {
		guySelection = "FireGuy";
		playerGuy = new FireGuy();
	}
	if(guySelection == "3") {
         	guySelection = "GrassGuy";
	        playerGuy = new GrassGuy();
        }
	if(guySelection == "4") {
         	guySelection = "WaterGuy";
	        playerGuy = new WaterGuy();
        }
	
	string userInput;
	bool validInput = false;
	string nickname;
	cout << "You've chosen " << guySelection << "! Good choice!" << endl;
	while(!validInput) {
		cout << "Would you like to give your Guy a nickname? Enter \"yes\" or \"no\"." << endl;
		cin >> userInput;
		if(userInput == "yes" || userInput == "no") {
			validInput = true;
			break;
		}
		cout << "Please enter a valid input!" << endl;
	}

	if(userInput == "no") {
		playerGuy->set_nickname(guySelection);
	}

	if(userInput == "yes") {
		validInput = false;
		while (!validInput){	
			cout << "What would you like to nickname your Guy?" << endl;
			cin >> nickname;
			cout << "Are you certain that you'd like to use the name \"" << nickname << "\"? Enter \"yes\" or \"no\"." << endl;
			cin >> userInput;
			if(userInput == "yes") {
				validInput = true;
			        break;
			}
		}
		playerGuy->set_nickname(nickname);
	}
	cout << playerGuy->get_nickname() << endl;

	return 0;
}
