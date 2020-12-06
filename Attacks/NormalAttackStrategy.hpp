#ifndef __NORMALATTACKSTRATEGY__
#define __NORMALATTACKSTRATEGY__

#include "Attack.hpp"
#include "../Base/mult.hpp"
#include "../Base/sub.hpp"
#include "../Base/add.hpp"

class Base;

class NormalAttackStrategy : public Attack {
  private:
    Base* damage;
  public:
    NormalAttackStrategy(Guy* user) : Attack(user) {
      damage = new Op(user -> get_damage);
    }
    virtual void atk(Guy* opponent) {
      Base* opponentHealth = new Op(opponent -> Health);
      Base* afterdamage = new Sub(opponentHealth, damage);
      if (afterdamage -> evaluate() < 0) {
        user -> isAlive(false);
        opponent -> setHealth(0);
      }
      else {
        opponent -> setHealth(afterdamage -> evaluate());
      }
    }
};

#endif
