#ifndef __NORMALATTACKSTRATEGY__
#define __NORMALATTACKSTRATEGY__

#include "Attack.hpp"
#include "../Base/base.hpp"

class Base;

class NormalAttackStrategy : public Attack {
  private:
    Base* damage;
  public:
    NormalAttackStrategy(NeutralAttack* n, TypedAttack* a) {
      this -> n = n;
      this -> a = a;
    }
    virtual void atk(Guy* opponent) {
      
    }
};

#endif