//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_GAME_H
#define SNAKESLADDERS_GAME_H

#include "conio.h"

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
    static Block board[10][10];
    Player playerArray[2];


    virtual ~Game();
    Game();

    bool isPlaying();

    void DisplayBoard();

    void sleep();

    //Structure Test Functions

    bool checkLadder(Player p);

    void ladder1(Player p);

    void ladder2(Player p);

    void ladder3(Player p);

    bool checkSnake(Player p);

    void snake1(Player p);

    void snake2(Player p);

    void snake3(Player p);





};


#endif //SNAKESLADDERS_GAME_H
