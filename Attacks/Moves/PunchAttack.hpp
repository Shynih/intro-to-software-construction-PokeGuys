#ifndef __PUNCHATTACK_HPP__
#define __PUNCHATTACK_HPP__

#include "../NeutralAttack.hpp"

class PunchAttack() : public NeutralAttack {
  public:
    PunchAttack(string type, int damage) {
      this -> type = type;
      this -> damage = damage;
    }
};



#endif