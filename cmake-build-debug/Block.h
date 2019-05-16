//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_BLOCK_H
#define SNAKESLADDERS_BLOCK_H
#import <iostream>
#include <string>

class Block {
private:

    int ID;
    bool SnakeStart;
    bool SnakeFin;
    bool SnakeBody;
    bool LadderStart;
    bool LadderFin;
    bool LadderBody;
    bool BlackH;
    bool PlayerOn;
    int PlayerID;

public:
    Block();

    void Display();

    std::string SnakeD();

    std::string LadderD();

    std:: string BlackHD();


    int getPlayerId() const;

    void setPlayerId(int playerId);

    bool isSnakeStart() const;

    bool isBlackH() const;

    void setBlackH(bool blackH);

    int getId() const;

    void setId(int id);

    void setSnakeStart(bool snakeStart);

    bool isSnakeFin() const;

    void setSnakeFin(bool snakeFin);

    bool isSnakeBody() const;

    void setSnakeBody(bool snakeBody);

    bool isLadderStart() const;

    void setLadderStart(bool ladderStart);

    bool isLadderFin() const;

    void setLadderFin(bool ladderFin);

    bool isLadderBody() const;

    void setLadderBody(bool ladderBody);

    bool isPlayerOn() const;


    void setPlayerOn(bool playerOn);


};


#endif //SNAKESLADDERS_BLOCK_H
