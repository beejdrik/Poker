//
// Created by Owner on 3/31/2025.
//

#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <ostream>
using namespace std;
#include <string>

class Card {
    private:
    string suit;
    string rank;
    public:
    Card() : suit(""), rank("") {}
    Card(string s, string r) : suit(s), rank(r) {}

    string getSuit() const { return suit; }
    string getRank() const { return rank; }
    void setSuit(string s) { suit = s; }
    void setRank(string r) { rank = r; }

    void Print() const {
        cout << getSuit() << " " << getRank() << endl;
    }


};
class Deck {
int clubs[13]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int spades[13]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int hearts[13]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int diamonds[13]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
};



#endif //DECK_H
