//
// Created by DaBae on 5/13/2019.
//

#include "Game.h"




Game::Game() {
    //Setting all the pointers of the blocks to null
    //Setting the ID of each block. ID is just its position on the board from a scale of 0-99
    // The ID equals 10*row + column.
    //For example the block of row [2][5] will have an ID (2*10) + 5 = 25
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j<10; j++) {
            board[i][j] = Block();
            board[i][j].setId((i*10)+j);
        }
    }





    //Following a separatley designed diagram
    //The blocks that have Ladder(Head or Tail), Snake(Head of Tail), BlackHole
    //will have their respective booleans set to true

    //Ladder 1
    for (int i = 0; i<=4; i++) {
        if (i==0)
            board[i][1].setLadderStart(true);
        else if (i==4)
            board[i][1].setLadderFin(true);
        else
            board[i][1].setLadderBody(true);
    }

    //Snake 1
    for (int i = 0; i<=9; i++) {
        if (i==0)
            board[i][4].setSnakeFin(true);
        else if (i==9)
            board[i][4].setSnakeStart(true);
        else
            board[i][4].setSnakeBody(true);
    }

    //Ladder 2
    board[0][7].setLadderStart(true);
    board[1][6].setLadderBody(true);
    board[2][5].setLadderBody(true);
    board[3][4].setLadderBody(true);
    board[4][3].setLadderBody(true);
    board[5][2].setLadderBody(true);
    board[6][1].setLadderBody(true);
    board[7][0].setLadderFin(true);

    //Ladder 3
    board[7][5].setLadderStart(true);
    board[8][6].setLadderBody(true);
    board[9][7].setLadderFin(true);

    //Snake 2
    board[0][8].setSnakeFin(true);
    board[1][7].setLadderBody(true);
    board[2][6].setSnakeStart(true);

    //Snake 3
    board[3][8].setSnakeFin(true);
    board[4][8].setSnakeBody(true);
    board[5][8].setSnakeBody(true);
    board[6][8].setSnakeStart(true);


    //BH1
    board[0][9].setBlackH(true);

    //BH2
    board[6][6].setBlackH(true);

    //BH3
    board[9][1].setBlackH(true);

    //BH4
    board[9][8].setBlackH(true);

}

Game::~Game() {}

void Game::turn (Player p) {
    int rolled = rollDice();

    if (p.getsqPos()==-1) {
        if (rolled==6) {
            p.setsqPos(0);
            return;
        }
        else
            return;

    }
    //Address the BHoled Condition
    if (p.isHoled()) {
        if (rolled != 6) {
            std::cout << "Player " + std::to_string(p.getId()) + " ur still stuck in the hole!" << std::endl;
            return;
        }
        else {
            std::cout << "Player " + std::to_string(p.getId()) + " ur are out of the hole!" << std::endl;
            return;
        }
    }

    //Old position is removed of player
    int oldx = p.getXpos();
    int oldy = p.getYpos();

    p.setsqPos(p.getsqPos()+rolled);

    int newx = p.getXpos();
    int newy = p.getYpos();


    UpdateBoard(oldx, oldy, newx, newy, p);

    if(checkLadder(p)) {
        std::cout << "You have gone up" << std::endl;
        //NewPosition gets Player
        board[p.getXpos()][p.getYpos()].setPlayerOn(true);
        board[p.getXpos()][p.getYpos()].setPlayerId(p.getId());
    }
    if (checkSnake(p)) {
        std::cout << "You have been eaten" << std::endl;
        //NewPosition gets Player
        board[p.getXpos()][p.getYpos()].setPlayerOn(true);
        board[p.getXpos()][p.getYpos()].setPlayerId(p.getId());

    }
}

int Game::rollDice()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

/*
 * If the game detects that the player
 */


void Game::ladder1(Player p){
    int oldx = p.getXpos();
    int oldy = p.getYpos();

    p.setXpos(4);
    p.setYpos(1);
    p.setsqPos(41);

    int newx = p.getXpos();
    int newy = p.getYpos();

    Game::UpdateBoard(oldx, oldy, newx, newy, p);
//    std::cout << "You have gone up" << std::endl;

}
void Game::ladder2(Player p){
    int oldx = p.getXpos();
    int oldy = p.getYpos();

    p.setXpos(7);
    p.setYpos(0);
    p.setsqPos(70);

    int newx = p.getXpos();
    int newy = p.getYpos();

    Game::UpdateBoard(oldx, oldy, newx, newy, p);
//    std::cout << "You have gone up" << std::endl;w
}
void Game::ladder3(Player p){
    int oldx = p.getXpos();
    int oldy = p.getYpos();


    p.setXpos(9);
    p.setYpos(7);
    p.setsqPos(97);

    int newx = p.getXpos();
    int newy = p.getYpos();

    Game::UpdateBoard(oldx, oldy, newx, newy, p);
//    std::cout << "You have gone up" << std::endl;
}
bool Game::checkLadder(Player p){
    int x =p.getXpos();
    int y = p.getYpos();
    int sq = x * 10 + y;
    int boardID1 = Game::board[0][1].getId();
    int boardID2 = Game::board[0][7].getId();
    int boardID3 = Game::board[7][5].getId();

    if(boardID1 == sq) {
        ladder1(p);
        return true;
    }
    else if(boardID2 == sq){
        ladder2(p);
        return true;
    }
    else if(boardID3 == sq){
        ladder3(p);
        return true;
    }
    else{
        return false;
    }


}
void Game::snake1(Player p){
    p.setXpos(0);
    p.setYpos(4);
    p.setsqPos(4);
//    std::cout << "You have been eaten" << std::endl;
}

void Game::snake2(Player p){
    p.setXpos(0);
    p.setYpos(8);
    p.setsqPos(8);
//    std::cout << "You have been eaten" << std::endl;
}
void Game::snake3(Player p){
    p.setXpos(3);
    p.setYpos(8);
    p.setsqPos(38);
//    std::cout << "You have been eaten" << std::endl;
}

bool Game::checkSnake(Player p){
    int x =p.getXpos();
    int y = p.getYpos();
    int sq = x * 10 + y;
    int boardID1 = Game::board[9][4].getId();
    int boardID2 = Game::board[2][6].getId();
    int boardID3 = Game::board[6][8].getId();


    int temp[p.getXpos()][p.getYpos()];
    if(boardID1 == sq) {
        snake1(p);
        return true;
    }
    else if(boardID2 == sq){
        snake2(p);
        return true;
    }
    else if(boardID3 == sq){
        snake2(p);
        return true;
    }
    else{
        return false;
    }

}

void Game::UpdateBoard(int xold, int yold, int xnew, int ynew, Player p){

    Game::board[xold][yold].setPlayerOn(false);
    Game::board[xold][yold].setPlayerId(-1);


    Game::board[xold][yold].setPlayerOn(true);
    Game::board[xold][yold].setPlayerId(p.getId());


};


bool Game::isPlaying() {
    for (int i = 0; i<2; i++)
        if(playerArray[i].won())
            return false;

    return true;
}

void Game::DisplayBoard() {

    std::cout<<"Key:" << std::endl;
    std::cout<<"Each Box has: [Box# PlayerID(ip) SnakePart(ip) LadderPart(ip) BlackHole(ip)]" << std::endl;
    std::cout<<"ip - values only shown if they are present " << std::endl;
    std::cout<<"'F=' = Start of Ladder" << std::endl;
    std::cout<<"'==' = Body of Ladder" << std::endl;
    std::cout<<" '=B' = End of Ladder" << std::endl;
    std::cout << "'S~' = Head of Snake" << std::endl;
    std::cout << "'~~' = Body of Snake" << std::endl;
    std::cout<<" 'T~' = Tail of Snake" << std::endl;
    std::cout << "' ?' = BlackHole" << std::endl;
    std::cout << "" << std::endl;

    if (playerArray[0].getsqPos()==-1)
        std::cout << "P1" << std::endl;
    if (playerArray[1].getsqPos()==-1)
        std::cout << "P2" << std::endl;

for (int i = 0; i<10; i++) {
    std::cout.width(500);
    for (int j = 0; j < 10; j++) {
        std::cout << " ";
        board[i][j].Display();
        std::cout << " ";
    }
    std::cout << std::endl;
}
}



//
//bool Game::sleep() { //Gotta figure this one out
std::chrono::milliseconds timespan(111605); // or whatever

//std::this_thread::sleep_for(timespan);
////}
