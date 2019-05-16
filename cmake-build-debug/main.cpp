
using namespace std;
#include "Game.h"


//Creating a game object



//int rollDice()
//{
//    int roll;
//    int min = 1; // the min number a die can roll is 1
//    int max = 6;// this->dieSize; // the max value is the die size
//
//    roll = rand() % (max - min + 1) + min;
//
//    return roll;
//}
//int turn(Player player, int square) { //We can replace the int player with the playerID
//    int roll, next;
//    while (true) {
//        roll = rollDice();
//        printf("Player %d, on square %d, rolls a %d", player.getId(), square, roll);
//        if (square + roll > 100) {
//            printf(" but cannot move.\n");
//        } else {
//            square += roll;
//            printf(" and moves to square %d\n", square);
//            if (square == 100)
//                return 100;
//
//            if (square < next) {
//                printf("Landed on a ladder. Climb up to %d.\n", next);
//                square = next;
//            } else if (next < square) {
//                printf("Oops! landed on a snake. Slither down to %d.\n", next);
//                square = next;
//            }
//        }
//
//    }
//}

//void turn (Player p) {
//    int rolled = rollDice();
//
//    if (p.getsqPos()==-1) {
//        if (rolled==6) {
//            p.setsqPos(0);
//            return;
//        }
//        else
//            return;
//
//    }
//    //Address the BHoled Condition
//    if (p.isHoled()) {
//        if (rolled != 6) {
//            std::cout << "Player " + std::to_string(p.getId()) + " ur still stuck in the hole!" << endl;
//            return;
//        }
//        else {
//            std::cout << "Player " + std::to_string(p.getId()) + " ur are out of the hole!" << endl;
//            return;
//        }
//    }
//
//    //Old position is removed of player
//    int oldx = p.getXpos();
//    int oldy = p.getYpos();
//
//    p.setsqPos(p.getsqPos()+rolled);
//
//    int newx = p.getXpos();
//    int newy = p.getYpos();
//
//
//    game.UpdateBoard(oldx, oldy, newx, newy, p);
//
//    if(game.checkLadder(p)) {
//        std::cout << "You have gone up" << std::endl;
//        //NewPosition gets Player
//        game.board[p.getXpos()][p.getYpos()].setPlayerOn(true);
//        game.board[p.getXpos()][p.getYpos()].setPlayerId(p.getId());
//    }
//    if (game.checkSnake(p)) {
//        std::cout << "You have been eaten" << std::endl;
//        //NewPosition gets Player
//        game.board[p.getXpos()][p.getYpos()].setPlayerOn(true);
//        game.board[p.getXpos()][p.getYpos()].setPlayerId(p.getId());
//
//    }
//}

//We need a method to associate


int main() {

    Game game;
    game= Game();

    //Declaring and initializing the players, then placing them in an array playerArray
    Player p1;
    Player p2;

    game.playerArray[0] = p1;
    game.playerArray[1] = p2;

    Player curr; //temporary player object used to make syntax easier

//    Block b;
//    b.setBlackH(true);
//    b.setId(10);
//
//    b.Display();

game.DisplayBoard();

    while (game.isPlaying()) {
        for (int i = 0; i<2; i++) {
            curr = game.playerArray[i];
            game.turn(curr);
        }

    }

    //Declare and Initialize Player Objects
    //Place them in an array
    //Throw the whole process in a while loop?
    //while (Game.isPlaying) {
    // for (i<PlayerArray.length;i++) {
    //turn(Player p, Square s)
     //if (p.wins)
        //Game.isPlaying = false;

    //Game.Display




    return 0;
}