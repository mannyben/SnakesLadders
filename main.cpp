#include<stdio.h>
#include<iostream>
using namespace std;

int rollDice()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}
int turn(int player, int square) {
    int roll, next;
    while (true) {
        roll = rollDice();
        printf("Player %d, on square %d, rolls a %d", player, square, roll);
        if (square + roll > 100) {
            printf(" but cannot move.\n");
        } else {
            square += roll;
            printf(" and moves to square %d\n", square);
            if (square == 100)
                return 100;

            if (square < next) {
                printf("Landed on a ladder. Climb up to %d.\n", next);
                square = next;
            } else if (next < square) {
                printf("Oops! landed on a snake. Slither down to %d.\n", next);
                square = next;
            }
        }

    }
}


int main(){


    return 0;
}