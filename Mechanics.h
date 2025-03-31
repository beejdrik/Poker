#ifndef MECHANICS_H
#define MECHANICS_H
using namespace std;
#include <iostream>


class Mechanics {
protected:
    int pot = 0;
    int money = 250;
public:

    void setMoney(int money);
    void setPot(int pot);
    int getMoney() const { return money; }
    int getPot() const { return pot; }

    void print() const {
        std::cout << "Money: " << money << std::endl;
    }
};



#endif //MECHANICS_H
