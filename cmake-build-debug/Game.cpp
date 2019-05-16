//
// Created by DaBae on 5/13/2019.
//

#include "Game.h"
#include <array>

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

/*
 * If the game detects that the playaer
 */
bool Game::isPlaying() {
    for (int i = 0; i<2; i++)
        if(playerArray[i].won())
            return false;

    return true;
}
//
//bool Game::sleep() { //Gotta figure this one out
//    std::this.thread::sleep_for (std::chrono::seconds(1));
//}
