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
 > <a href="https://imgbb.com/"><img src="https://i.ibb.co/5RcX9Br/pokeguys.png" alt="pokeguys" border="0" /></a>
 > * The attack function is using the Strategy Pattern (abstract class Attack()) which can call the NormalAttackStrategy attack function or TypedAttackStrategy attack function.
 > * Each set of moves for each PokeGuy is created with the Factory Method, moveFactory() which the Guy class calls and sets its Neutral and Typed attack.
 > * Lastly, the Composite Pattern is called inside the Attack strategy where damage is grouped in Base* and which the evaluate function represents the top number in the hierarchy.
 > * The game will be run in main.
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 > <a href="https://ibb.co/NVjnCBf"><img src="https://i.ibb.co/w0Wrgm8/Screenshot-2020-12-09-133155.png" alt="Screenshot-2020-12-09-133155" border="0"></a>
 > <a href="https://ibb.co/Y2NnQ2B"><img src="https://i.ibb.co/MngwSnk/Screenshot-2020-12-09-133543.png" alt="Screenshot-2020-12-09-133543" border="0"></a>
 
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 >	* For testing we make multiple files
 
 
