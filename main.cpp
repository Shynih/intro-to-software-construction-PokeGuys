#include "guys/ElectricGuy.hpp"
#include "guys/FireGuy.hpp"
#include "guys/GrassGuy.hpp"
#include "guys/WaterGuy.hpp" 
#include "Attacks/NormalAttackStrategy.hpp"
#include "Attacks/TypedAttackStrategy.hpp"
#include <iostream>
#include <ctime>
#include <limits>

using namespace std;

void wait();
void playerAttack(Guy* user, Guy* opponent);
void opponentAttack(Guy* user, Guy* opponent);

int main() {

	srand(time(0));

	cout << "Welcome to the wonderful world of PokeGuys!" << endl;
	cout << "There comes a time in every Trainer's life where they must make a choice: " << endl <<
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
	playerGuy -> set_moves();
	
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
	cout << endl;
	
	string getBuffer;

	cout << "Congratulations on obtaining your first Guy! With them by your side, " << endl;
	cout << "you'll be able to travel all over the world, searching for other Guys to battle." << endl;
	cout << "But don't get too far ahead of yourself! There are some things you need to know about battles " << endl;
	cout << "that will give you a leg up before you set off!" << endl << endl;
	
	getline(cin, getBuffer);
	cout << "Press ENTER to continue. . ." << endl;
	wait();

	cout << "Type Effectiveness" << endl;
	cout << "In the same way that water is ideal for putting out fires while grass does the opposite, Guys " << endl;
	cout << "carry with them inherent weaknesses. Any attack that a Guy is weak to will do twice the damage!" << endl;
	cout << "It is greatly beneficial to know your weaknesses, as well as " << endl;
	cout << "your opponent's, so always keep these weaknesses in mind!" << endl;
	cout << "Electric's weakness is Grass!" << endl;
	cout << "Fire's weakness is Water!" << endl;
	cout << "Grass' weakness is Fire!" << endl;
	cout << "Water's weakness is Electric!" << endl;// << endl;
	
	wait();

	cout << "Moveset" << endl;
	cout << "Every guy has two moves: One neutral attack dealing 50 damage, and another corresponding " << endl;
	cout << "to their type that deals 30 damage. Pair this knowlege with type effectiveness to take on opponents " << endl;
	cout << "in a more effective way!" << endl;// << endl;

	wait();

	cout << "Enough talking, its time to get started on your adventure! Take your first step into the wild grass!";// << endl;

	wait();

	cout << "              O" << endl;
	cout <<	"              {____________________________________" << endl;
	cout << "@XXXXXXXXXXXXXX___________________________________/" << endl;
	cout << "              {" << endl;
	cout << "              O" << endl;
	
	int randomOneToFour;
	randomOneToFour = (rand() % 4) + 1;
	
	Guy* opponentGuy;
	if(randomOneToFour == 1) {
		guySelection = "ElectricGuy";
		opponentGuy = new ElectricGuy();
	}
	if(randomOneToFour == 2) {
		guySelection = "FireGuy";
		opponentGuy = new FireGuy();
	}
	if(randomOneToFour == 3) {
		guySelection = "GrassGuy";
		opponentGuy = new GrassGuy();
	}
	if(randomOneToFour == 4) {
		guySelection = "WaterGuy";
		opponentGuy = new WaterGuy();
	}	
	opponentGuy -> set_moves();
	opponentGuy->set_nickname(guySelection);

	cout << "You've encountered a wild " << opponentGuy->get_nickname() << "!" <<  endl;

	while (playerGuy->is_alive() && opponentGuy->is_alive()) {
		//the battle goes here, i don't know how attack works
		playerAttack(playerGuy, opponentGuy);

		if (playerGuy -> is_alive() == false || opponentGuy -> is_alive() == false) {
			break;
		}
			//call the opponent's randomized attack here
		opponentAttack(playerGuy, opponentGuy);
	}
	
	cout << "That was a close one! Come on, let's head to the next town to heal your Guy- Wait!";// << endl;
	wait();
	cout << "Where are you going?!";// << endl;
	wait();
	cout << " . . . ";// << endl;
	wait();
	cout << "Y-You don't think you're cut out to become a Guy trainer after all??";// << endl;
	wait();
	cout << "You'd rather spend your days at home, treating your " << playerGuy->get_nickname() << " as a pet??";// << endl;
	wait();
	cout << " . . . ";// << endl;
	wait();
	cout << "I see. If that's the decision you've come to, I'll do nothing to stop you. As long as you treat your Guy with love and respect, you may do as you please." << endl;
		
	return 0;
}

void wait() {
	//cout << "Press ENTER to continue. . ." << endl;
	cin.ignore(numeric_limits <streamsize>::max(), '\n');
}

void playerAttack(Guy* playerGuy, Guy* opponentGuy) {
	string userInput;
	cout << "Your move! Your attacks are:" << endl;
	cout << "1. " << playerGuy->get_typed_atk_name() << endl << "2. " << playerGuy->get_neutral_atk_name() << endl;
	while (userInput != "1" || userInput != "2") {
		cout << "What are you gonna do?" << endl;
		cin >> userInput;
		if (userInput == "1" || userInput == "2") {
			break;
		}
	}
	if (userInput == "1") {
		Attack* typed = new TypedAttackStrategy(playerGuy);
		playerGuy -> set_attack(typed);
		playerGuy -> attack(opponentGuy);
		cout << "Your attack dealt " << 
			playerGuy -> getAttack() -> getDamage() -> evaluate()
			<< " damage to the opponent! They have " << opponentGuy -> getHealth() << " HP remaining." << endl;
		
	}
	if (userInput == "2") {
		Attack* normal = new NormalAttackStrategy(playerGuy);
		playerGuy -> set_attack(normal);
		playerGuy -> attack(opponentGuy);
		cout << "Your attack dealt " << 
			playerGuy -> getAttack() -> getDamage() -> evaluate()
			<< " damage to the opponent! They have " << opponentGuy -> getHealth() << " HP remaining." << endl;
	}
	
}
void opponentAttack(Guy* user, Guy* opponentGuy) {
	int random = rand() % 2 + 1;
	if (random == 1) {
		Attack* typed = new TypedAttackStrategy(user);
		opponentGuy -> set_attack(typed);
		opponentGuy -> attack(user);
		cout << "The opponent's attack dealt "
			<< opponentGuy -> getAttack() -> getDamage() -> evaluate() 
			<<" damage. You have " << user -> getHealth()<<  " HP remaining." << endl;
	}
	if (random == 2) {
		Attack* typed = new NormalAttackStrategy(user);
		opponentGuy -> set_attack(typed);
		opponentGuy -> attack(user);
		cout << "The opponent's attack dealt "
			<< opponentGuy -> getAttack() -> getDamage() -> evaluate() 
			<<" damage. You have " << user -> getHealth()<<  " HP remaining." << endl;
	}
}
