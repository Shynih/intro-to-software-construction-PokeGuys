#ifndef __CLAWATTACK_HPP__
#define __CLAWATTACK_HPP__

#include "../NeutralAttack.hpp"

class ClawAttack : public NeutralAttack {
  public:
    ClawAttack(string type, int damage) : NeutralAttack(type, damage) {}
};



#endif
