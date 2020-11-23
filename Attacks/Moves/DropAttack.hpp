#ifndef __DROPATTACK_HPP__
#define __DROPATTACK_HPP__

#include "../NeutralAttack.hpp"

class DropAttack() : public NeutralAttack {
  public:
    DropAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif