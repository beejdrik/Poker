#ifndef HUMAN_H
#define HUMAN_H
using namespace std;
#include "Players.h"


class Human : public Players{
  public:
    Human(int playerNum, string name, int money);
    ~Human();
void action() override {

}


};



#endif //HUMAN_H
