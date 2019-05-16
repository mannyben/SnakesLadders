//
// Created by DaBae on 5/13/2019.
//

#include "Player.h"

Player::Player() {
    xpos = -1;
    ypos = -1;
    sqPos = -1;
    holed = false;
    id = 0;
    start = false;
}

/*
 * A player has won if they make it to square 100 or board[10][10]
 */
bool Player::won() {
    return  (getXpos()>= 10 && getYpos() >= 10);
}


int Player::getXpos() {
    return xpos;
}

void Player::setXpos(int xpos) {
    Player::xpos = xpos;
}

int Player::getYpos() {
    return ypos;
}

void Player::setYpos(int ypos) {
    Player::ypos = ypos;
}

int Player::getId() const {
    return id;
}

void Player::setId(int id) {
    Player::id = id;
}

bool Player::isStart() const {
    return start;
}

void Player::setStart(bool start) {
    Player::start = start;
}

bool Player::isHoled() const {
    return holed;
}

void Player::setHoled(bool holed) {
    Player::holed = holed;
}

int Player::getsqPos() const {
    return sqPos;
}

void Player::setsqPos(int sqPos) {
    Player::sqPos = sqPos;
    if (sqPos<10) {
        Player::setXpos(0);
        Player::setYpos(sqPos);
    }
    if (sqPos>=10){




    }
    }

