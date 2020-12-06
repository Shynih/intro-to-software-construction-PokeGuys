#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

#include "NeutralAttack.hpp"
#include "TypedAttack.hpp"

class Guy;
class NeutralAttack;
class TypedAttack;

class Attack {
  protected:
    Guy* user;
  public:
    Attack(Guy* user) {
      this -> user = user;
    }
    virtual void atk(Guy* guy) = 0;
};

#endif
