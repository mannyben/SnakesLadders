//
// Created by DaBae on 5/13/2019.
//

#include "Player.h"

Player::Player() {
    xpos = -1;
    ypos = -1;
    holed = false;
    id = 0;
    start = false;
}

int Player::getXpos() const {
    return xpos;
}

void Player::setXpos(int xpos) {
    Player::xpos = xpos;
}

int Player::getYpos() const {
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

