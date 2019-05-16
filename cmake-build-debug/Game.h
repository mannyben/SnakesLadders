//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_GAME_H
#define SNAKESLADDERS_GAME_H

#import "Block.h"
#import "Player.h"
#include <array>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <iostream>
/**
 * Serves as the class containing the Board
 */
class Game {

public:
    Block *board[10][10];
    Player playerArray[2];


    virtual ~Game();
    Game();

    bool isPlaying();

    void sleep();



};


#endif //SNAKESLADDERS_GAME_H
