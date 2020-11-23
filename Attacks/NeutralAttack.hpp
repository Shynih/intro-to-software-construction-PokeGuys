#ifndef NEUTRALATTACK_HPP
#define NEUTRALATTACK_HPP
#include <string>

using namespace std;

class NeutralAttack() {
  protected:
    string type;
    int damage;
  public:
    NeutralAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif