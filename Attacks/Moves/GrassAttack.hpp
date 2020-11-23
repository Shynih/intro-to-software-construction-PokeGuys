#ifndef __GRASSATTACK_HPP__
#define __GRASSATTACK_HPP__

#include "../TypedAttack.hpp"

class GrassAttack() : public TypedAttack {
  public:
    GrassAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif