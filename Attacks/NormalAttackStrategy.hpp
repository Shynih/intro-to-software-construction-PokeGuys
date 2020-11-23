#ifndef __NORMALATTACKSTRATEGY__
#define __NORMALATTACKSTRATEGY__

#include "Attack.hpp"

class NormalAttackStrategy : public Attack {
  private:
    Base* damage;
  public:
    NormalAttackStrategy() : Attack() {}
    virtual void atk(Guy* guy) {
      
    }
};

#endif