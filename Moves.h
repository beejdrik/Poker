#ifndef MOVES_H
#define MOVES_H
#include "Mechanics.h"


class Moves : Mechanics{
    //NEED TO CREATE NEXT TURN FUNCTIONALITY

    void raisePot(int& pot, int& raise) {
        std::cout << "How much?\n" << std::endl << "$";
        std::cin >> raise;

        if (raise > money) {
            std::cout << "Not enough money!\n";
            return;
        }

        pot += raise;
        money -= raise;
    }
};



#endif //MOVES_H
