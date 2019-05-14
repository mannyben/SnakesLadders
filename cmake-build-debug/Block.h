//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_BLOCK_H
#define SNAKESLADDERS_BLOCK_H


class Block {
private:

    int ID;
    bool SnakeStart;
    bool SnakeFin;
    bool SnakeBody;
    bool LadderStart;
    bool LadderFin;
    bool LadderBody;
    bool PlayerOn;

public:
    Block();

    bool isSnakeStart() const;

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
