#ifndef __TYPEDATTACKSTRATEGY__HPP__
#define __TYPEDATTACKSTRATEGY__HPP__

#include "Attack.hpp"
#include "../Base/base.hpp"

class Base;

class TypedAttackStrategy() : public Attack {
  private:
    Base* damage;
  public:
    TypedAttackStrategy() : Attack(){};
    virtual void atk(Guy* guy) {

    }
}



#endif