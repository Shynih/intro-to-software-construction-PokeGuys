#ifndef __FIREATTACK_HPP__
#define __FIREATTACK_HPP__

#include "../TypedAttack.hpp"

class FireAttack() : public TypedAttack {
  public:
    FireAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif