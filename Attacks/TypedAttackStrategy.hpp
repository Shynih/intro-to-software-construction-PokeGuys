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
<<<<<<< HEAD
      damage = new Op(user -> get_damage());
=======
      damage = new Op(user -> getNeutralAttack() -> get_damage());
>>>>>>> 34327eb382a9bf2a5493f2eb65bfb3fa5c58112d
    }
    virtual void atk(Guy* opponent) {
      Base* multiplier;

<<<<<<< HEAD
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
=======
      if (user -> getTypedAttack() -> get_type() == "Water" && opponent -> getWeakness() == "Water") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "Fire" && opponent -> getWeakness() == "Fire") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "Grass" && opponent -> getWeakness() == "Grass") {
        multiplier = new Op(2);
      }
      else if (user -> getTypedAttack() -> get_type() == "Electric" && opponent -> getWeakness() == "Electric") {
>>>>>>> 34327eb382a9bf2a5493f2eb65bfb3fa5c58112d
        multiplier = new Op(2);
      }
      else {
        multiplier = new Op(1);
      }

      Base* newdamage = new Mult(damage, multiplier);
<<<<<<< HEAD
      Base* opponentHealth = new Op(opponent -> Health);
=======
      Base* opponentHealth = new Op(opponent -> getHealth());
>>>>>>> 34327eb382a9bf2a5493f2eb65bfb3fa5c58112d
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
