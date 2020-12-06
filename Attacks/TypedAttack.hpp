#ifndef TYPEDATTACK_HPP
#define TYPEDATTACK_HPP
#include <string>

using namespace std;

class TypedAttack {
  protected:
    string type;
    int damage;
  public:
    TypedAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif