#ifndef __ELECTRICATTACK_HPP__
#define __ELECTRICATTACK_HPP__

#include "../TypedAttack.hpp"

class ElectricAttack : public TypedAttack {
  public:
    ElectricAttack(string type, int damage) : TypedAttack(type, damage) {}
};



#endif
