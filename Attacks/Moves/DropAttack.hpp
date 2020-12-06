#ifndef __DROPATTACK_HPP__
#define __DROPATTACK_HPP__

#include "../NeutralAttack.hpp"

class DropAttack : public NeutralAttack {
  public:
    DropAttack(string type, int damage) : NeutralAttack(type, damage) {}
};



#endif
