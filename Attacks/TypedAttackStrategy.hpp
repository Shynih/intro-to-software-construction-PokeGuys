#ifndef __TYPEDATTACKSTRATEGY__HPP__
#define __TYPEDATTACKSTRATEGY__HPP__

#include "Attack.hpp"
#include "../Base/mult.hpp"
#include "../Base/sub.hpp"
#include "../Base/add.hpp"

class Base;

class TypedAttackStrategy: public Attack {
  private:
    Base* damage;
  public:
    TypedAttackStrategy(Guy* user) : Attack(user) {
      damage = new Op(user -> get_damage());
    }
    virtual void atk(Guy* opponent) {
      Base* multiplier;

      if (user -> get_type() == "Water" && opponent -> getWeakness() == "Water") {
        multiplier = new Op(2);
      }
      else if (user -> get_type() == "Fire" && opponent -> getWeakness() == "Fire") {
        multiplier = new Op(2);
      }
      else if (user -> get_type() == "Grass" && opponent -> getWeakness() == "Grass") {
        multiplier = new Op(2);
      }
      else if (user -> get_type() == "Electric" && opponent -> getWeakness() == "Electric") {
        multiplier = new Op(2);
      }
      else {
        multiplier = new Op(1);
      }

      Base* newdamage = new Mult(damage, multiplier);
      Base* opponentHealth = new Op(opponent -> Health);
      Base* afterdamage = new Sub(opponentHealth, newdamage);
      if (afterdamage -> evaluate() < 0) {
        user -> setAlive(false);
        opponent -> setHealth(0);
      }
      else {
        opponent -> setHealth(afterdamage -> evaluate());
      }
    }
};

#endif
