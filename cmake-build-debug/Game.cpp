//
// Created by DaBae on 5/13/2019.
//

#include "Game.h"
#include <array>

Game::Game() {
    //Setting all the pointers of the blocks to null
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j<10; j++)
            board[i][j] = nullptr;
    }

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

bool Game::sleep() { //Gotta figure this one out
    std::this.thread::sleep_for (std::chrono::seconds(1));
}
