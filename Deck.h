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
};

class Deck {
private:
    Card deck[52]{};

    string suit[4] = {"Clubs", "Spades", "Diamonds", "Hearts"};
    string rank[13] = {"Ace", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine", "Ten"
        ,"Jack", "Queen", "King"};
    public:
    Deck() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                deck[i * 13 + j].setSuit(suit[i]);
                deck[i * 13 + j].setRank(rank[j]);
            }
        }
    }
};





#endif //DECK_H
