#ifndef PLAYERS_H
#define PLAYERS_H
using namespace std;
#include <iostream>


class Players {
protected:
    int pot = 0;
    int money = 250;
    string action;
public:

    void setMoney(int money);
    void setPot(int pot);
    int getMoney() const { return money; }
    int getPot() const { return pot; }

    virtual void act() {
        cout << "Your turn: " << std::endl;
        std::cin >> action << std::endl;
        if (action == "raise") {
                std::cout << "How much?\n" << std::endl << "$";
                std::cin >> raise;

                if (raise > money) {
                    std::cout << "Not enough money!\n";
                    return;
                }

                pot += raise;
                money -= raise;
                std::cout << name << "Raises : " << raise << std::endl;
                std::cout << "\nPot: " << pot << std::endl;
        }
        if (action == "check") {
            std::cout << "\n Check " << std::endl;
            std::cout << "\nPot: " << pot << std::endl;
        }
        if (action == "fold") {
            std::cout << name << "\n Fold " << std::endl;
            std::cout << "\nPot: " << pot << std::endl;
        }
        else
            std::cout << "\nInvalid input" << "Choose 'check', 'raise', or 'fold'" << std::endl;
        cout << "Your turn: " << std::endl;
        std::cin >> action;
        std::cout << std::endl;

    }

    void print() const {
        std::cout << "Money: " << money << std::endl;
    }
};

#endif //PLAYERS_H
