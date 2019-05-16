//
// Created by DaBae on 5/13/2019.
//

#include "Block.h"

Block::Block() {
    ID = -1;
    PlayerOn=false;
    SnakeStart=false;
    SnakeFin=false;
    SnakeBody=false;
    LadderStart=false;
    LadderFin=false;
    LadderBody=false;
    BlackH = false;
    PlayerOn=false;
}

bool Block::isSnakeStart() const {
    return SnakeStart;
}

void Block::setSnakeStart(bool snakeStart) {
    SnakeStart = snakeStart;
}

bool Block::isSnakeFin() const {
    return SnakeFin;
}

void Block::setSnakeFin(bool snakeFin) {
    SnakeFin = snakeFin;
}

bool Block::isSnakeBody() const {
    return SnakeBody;
}

void Block::setSnakeBody(bool snakeBody) {
    SnakeBody = snakeBody;
}

bool Block::isLadderStart() const {
    return LadderStart;
}

void Block::setLadderStart(bool ladderStart) {
    LadderStart = ladderStart;
}

bool Block::isLadderFin() const {
    return LadderFin;
}

void Block::setLadderFin(bool ladderFin) {
    LadderFin = ladderFin;
}

bool Block::isLadderBody() const {
    return LadderBody;
}

void Block::setLadderBody(bool ladderBody) {
    LadderBody = ladderBody;
}

bool Block::isPlayerOn() const {
    return PlayerOn;
}

void Block::setPlayerOn(bool playerOn) {
    PlayerOn = playerOn;
}

int Block::getId() const {
    return ID;
}

void Block::setId(int id) {
    ID = id;
}

bool Block::isBlackH() const {
    return BlackH;
}

void Block::setBlackH(bool blackH) {
    BlackH = blackH;
}
