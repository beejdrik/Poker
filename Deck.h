#ifndef DECK_H
#define DECK_H
#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;
#include <string>
#include <list>
#include <ctime>
#include <cstdlib>

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
    void Print() {
        cout << rank << " " << suit << endl;
    }
};

class Deck {
private:
    list<Card> deck;

    string suit[4] = {"Clubs", "Spades", "Diamonds", "Hearts"};
    string rank[13] = {"Ace", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine", "Ten"
        ,"Jack", "Queen", "King"};
    public:
    Deck() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                deck.push_back(Card(suit[i], rank[j]));
            }
        }
        srand(time(nullptr));
        vector<Card> temp(deck.begin(), deck.end());
        random_shuffle(temp.begin(), temp.end());
        copy(temp.begin(), temp.end(), deck.begin());
    }
    Card dealCard() {

        Card newCard = deck.front();
        deck.pop_front();
      return newCard;

    }
};





#endif //DECK_H
