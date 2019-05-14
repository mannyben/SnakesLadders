//
// Created by DaBae on 5/13/2019.
//

#include "Game.h"

Game::Game() {
    //Setting all the pointers of the blocks to null
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j<10; j++)
            board[i][j] = nullptr;
    }
}

Game::~Game() {}


