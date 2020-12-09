# PokeGuys
 > Authors: \<[Jorge Peng](https://github.com/Shynih)\>
            \<[Brandon Trieu](https://github.com/btrieu)\>
            \<[Nicholas Chang](https://github.com/nickthechang)\>
 
## Project Description
 >   * This program is a small game inspired from the game Pokemon, where the player partners up with ElectroGuy and fights other TypeGuys that have two different sets of moves. The player is also able to heal once every fight and have the option to run away.
 > ### Why is it important or interesting to you?
 >   * Pokemon is just a childhood game which inspired us to create something similar which we thought we could implement using design patterns to use what we have learned in class.
 > ### What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [C++](https://en.cppreference.com/w/) - General high-level programming language.
 
 > ### What will be the input/output of your project?
 >   * The overall game will have a menu where it will prompt the user for some basic information such as a nickname and gender. Later, during the battle phase the game will output another menu with move options which the user will input the order and the game will carry it out. The game will have a simple story and end after the first battle.
 
 > ### What are the three design patterns you will be using?
 >   #### Creational Pattern: Factory Method
 >	* This design pattern will allow us to create different types of creatures to battle against more efficiently. This pattern helps give the player more variety when going against the creatures. There will be different opponents randomly.
 >   #### Behavioral Pattern: Strategy
 >	* The PokeGuys have two different types of moves, a normal attack and a typed attack. The normal attack is just a regular attack that damages the enemy depending on a fixed damage number. The typed attack has a lower attack damage but will multiply if the opponent results to be weak against a certain element. The strategy pattern will allow to carry different algorithms for each attack.
 >   #### Structural Pattern: Composite
 >	* Inside the strategy pattern attack, we additionally have classes to calculate damage numbers, Op, add, mult, to encapsulate numbers into a hierarchy and call the highest number in the hierarchy to evaluate.

## Class Diagram
 > <a href="https://imgbb.com/"><img src="https://i.imgur.com/r6pMfWM.png" alt="pokeguys" border="0" /></a>
 > * The attack function is using the Strategy Pattern (abstract class Attack()) which can call the NormalAttackStrategy attack function or TypedAttackStrategy attack function.
 > * Each set of moves for each PokeGuy is created with the Factory Method, moveFactory() which the Guy class calls and sets its Neutral and Typed attack.
 > * Lastly, the Composite Pattern is called inside the Attack strategy where damage is grouped in Base* and which the evaluate function represents the top number in the hierarchy.
 > * The game will be run in main.
 
 ## Screenshots
 > <a href="https://ibb.co/NVjnCBf"><img src="https://i.ibb.co/w0Wrgm8/Screenshot-2020-12-09-133155.png" alt="Screenshot-2020-12-09-133155" border="0"></a>
 > <a href="https://ibb.co/Y2NnQ2B"><img src="https://i.ibb.co/MngwSnk/Screenshot-2020-12-09-133543.png" alt="Screenshot-2020-12-09-133543" border="0"></a>
 
 ## Installation/Usage
 >	* To install and run this application you would first download all the files. Then you would run main.cpp to play. ./a.exe for windows ./a.out for mac.
 ## Testing
 >	* For testing we make multiple files such as attack_test.hpp, base_test.hpp, factor_tests.cpp, guys_test.hpp, and unit_test.cpp to make sure each class and its functions work. We made 106 tests in total using Googletest- Google Testing and Mocking Framework.
 
 
