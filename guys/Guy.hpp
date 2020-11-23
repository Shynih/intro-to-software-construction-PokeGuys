#ifndef GUY_HPP
#define GUY_HPP

#include "neutralattack.hpp"
#include "typedattack.hpp"
#include "damagecalc.hpp"

using namespace std;

class NeutralAttack();
class TypedAttack();
class MoveFactory();
class DamageCalc();

class Guy() {
  protected:
    moveFactory* f;
    NeutralAttack* n;
    TypedAttack* a;
    Attack* atk;

  public:
    Guy() {
      moveFactory* = nullptr;
      NeutralAttack* = nullptr;
      TypedAttack* = nullptr;
      DamageCalc* = nullptr; 
    }
    setFactory(moveFactory* f) {
      this -> f = f;
    }
    set_moves(){
      
    }
    attack() {
      atk -> attack();
    }

    set_attack(Attack* atk) {
      this -> atk = atk;
    }




};



#endif