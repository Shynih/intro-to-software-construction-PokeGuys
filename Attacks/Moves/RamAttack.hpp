#ifndef __RAMATTACK_HPP__
#define __RAMATTACK_HPP__

#include "../NeutralAttack.hpp"

class RamAttack() : public NeutralAttack {
  public:
    RamAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif