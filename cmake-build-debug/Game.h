//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_GAME_H
#define SNAKESLADDERS_GAME_H

#import "Block.h"

/**
 * Serves as the class containing the Board
 */
class Game {

public:
    Block *board[10][10];

    virtual ~Game();
    Game();


};


#endif //SNAKESLADDERS_GAME_H
