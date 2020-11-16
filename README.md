# Chess?
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: \<[Jorge Peng](https://github.com/Shynih)\>
            \<[Brandon Trieu](https://github.com/btrieu)\>
            \<[Nicholas Chang](https://github.com/nickthechang)\>
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
## Project Description
 >   * This program will allow the user to play chess as a player. It should have a variety of chess pieces that move differently, and the player should be able to "win" at the game. (Possibly player might play against AI) Most likely the application will require two players to play in the same application while taking turns.
 > ### Why is it important or interesting to you?
 >   * Chess is fun, it is simple and beautiful at the same time because of how complex it can get with the variety of algorithms the player can choose from to reach the goal of   winning. Chess just feels like the type of game to be simple and somewhat complex which would turn out to be a very helpful experience and good practice to use our C++ understanding so far.
>We’re also planning to implement some very simple form of AI in order to make this a player vs. computer game 

 > ### What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [C++](https://en.cppreference.com/w/) - General high-level programming language.
 
 > ### What will be the input/output of your project?
 >   * The input of the project would be the moves that the player would like to do and it would keep on going until either “king” becomes unable to move which would output a winner or a stalemate.
 
 > ### What are the three design patterns you will be using?
 >   #### Creational Pattern: Abstract Factory
 >	* Chess pieces can be generalized as black or white, so the set of eight pawns, two knights, two bishops, two rooks, one queen, one king would have a family of either black or white. At the same time there would be another family of either dead or alive where pieces that are on the board are in the alive family while those who have been overtaken by the opponent would be in the dead family.
 >   #### Behavioral Pattern: Strategy
 >	* The strategy pattern allows you to define a family of algorithms that belong to separate classes. This will be useful for creating methods to move different pieces with different types of movement patterns. All movement patterns will be placed in their own class that will interact with every type of chess piece with the same interface.
 >   #### Structural Pattern: Decorator
 >	* This strategy pattern lets you attach new behaviors to objects by placing the objects inside wrapper objects that change the behavior. This would be used when a pawn is able to promote after reaching the end of the opposite side of the board and the player has the ability to transform it either to a rook, bishop, knight, or queen.

## Class Diagram
 > <a href="https://ibb.co/qBq5PgN"><img src="https://i.ibb.co/VVnmPCg/Chess-Project-OMT.png" alt="Chess-Project-OMT" border="0" /></a>
 > * The move() function is implemented using the Strategy Pattern (abstract class MoveStrategy).  
 > * The different types of pieces are created using the Abstract Factory Pattern (abstract class PieceFactory).  
 > * Special cases where pawns are allowed to move two spaces instead of one and promote are implemented using the State Pattern.  
 > * All of these patterns inferface through ChessPiece, which is a parent class to all types of chess pieces.  
 > * The game is run in main through a ChessBoard object, which contains methods to set the board, display the board, and run the game. It also contains a vector of pointers to ChessPieces to store all pieces on the board.  
 
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
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
