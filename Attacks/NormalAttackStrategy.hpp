#ifndef __NORMALATTACKSTRATEGY__
#define __NORMALATTACKSTRATEGY__

#include "Attack.hpp"
#include "../Base/mult.hpp"
#include "../Base/sub.hpp"
#include "../Base/add.hpp"
#include "../guys/ElectricGuy.hpp"
#include "../guys/FireGuy.hpp"
#include "../guys/GrassGuy.hpp"
#include "../guys/WaterGuy.hpp"

class Base;

class NormalAttackStrategy : public Attack {
  private:
    Base* damage;
  public:
    NormalAttackStrategy(Guy* user) : Attack(user) {
      damage = new Op(user -> getNeutralAttack() -> get_damage());
    }
    virtual void atk(Guy* opponent) {
      Base* opponentHealth = new Op(opponent -> getHealth());
      Base* afterdamage = new Sub(opponentHealth, damage);
      if (afterdamage -> evaluate() <= 0) {
        opponent -> setAlive(false);
        opponent -> setHealth(0);
      }
      else {
        opponent -> setHealth(afterdamage -> evaluate());
      }
    }
};

#endif
