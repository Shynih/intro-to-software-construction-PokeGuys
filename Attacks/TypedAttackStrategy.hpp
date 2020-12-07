#ifndef __TYPEDATTACKSTRATEGY__HPP__
#define __TYPEDATTACKSTRATEGY__HPP__

#include "Attack.hpp"
#include "../Base/mult.hpp"
#include "../Base/sub.hpp"
#include "../Base/add.hpp"
#include "../guys/ElectricGuy.hpp"
#include "../guys/FireGuy.hpp"
#include "../guys/GrassGuy.hpp"
#include "../guys/WaterGuy.hpp"

class Base;

class TypedAttackStrategy: public Attack {
  private:
    Base* damage;
  public:
    TypedAttackStrategy(Guy* user) : Attack(user) {
      damage = new Op(user -> getTypedAttack() -> get_damage());
    }
    virtual void atk(Guy* opponent) {
      Base* multiplier;

      if (user -> getTypedAttack() -> get_type() == "water" && opponent -> getWeakness() == "Water") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "fire" && opponent -> getWeakness() == "Fire") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "grass" && opponent -> getWeakness() == "Grass") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "electric" && opponent -> getWeakness() == "Electric") {
        multiplier = new Op(2);
      }
      else {
        multiplier = new Op(1);
      }

      Base* damage = new Mult(damage, multiplier);
      Base* opponentHealth = new Op(opponent -> getHealth());
      Base* afterdamage = new Sub(opponentHealth, damage);
      if (afterdamage -> evaluate() < 0) {
        user -> setAlive(false);
        opponent -> setHealth(0);
      }
      else {
        opponent -> setHealth(afterdamage -> evaluate());
      }
    }
    virtual Base* get_damage() {
      return damage;
    }
};

#endif