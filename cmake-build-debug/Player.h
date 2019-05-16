//
// Created by DaBae on 5/13/2019.
//

#ifndef SNAKESLADDERS_PLAYER_H
#define SNAKESLADDERS_PLAYER_H


class Player {

private:
    int xpos;
    int ypos;
    int id;
    bool start;
    bool holed;
    int sqPos;

public:
    Player();

    int getsqPos() const;

    void setsqPos(int sqPos);

    int getXpos() ;

    void setXpos(int xpos);

    int getYpos() ;

    void setYpos(int ypos);

    int getId() const;

    void setId(int id);

    bool isStart() const;

    void setStart(bool start);

    bool isHoled() const;

    void setHoled(bool holed);

    bool won();

};


#endif //SNAKESLADDERS_PLAYER_H
