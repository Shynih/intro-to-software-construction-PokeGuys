#ifndef __WATERATTACK_HPP__
#define __WATERATTACK_HPP__

#include "../TypedAttack.hpp"

class WaterAttack : public TypedAttack {
  public:
    WaterAttack(string type, int damage) : TypedAttack(type, damage) {} 
};



#endif
