#ifndef GUY_HPP
#define GUY_HPP

#include "../Attacks/NeutralAttack.hpp"
#include "../Attacks/TypedAttack.hpp"
#include "../Factory/MoveFactory.hpp"
#include "../Attacks/Attack.hpp"

using namespace std;

class NeutralAttack;
class TypedAttack;
class MoveFactory;
class Attack;

class Guy {
  protected:
    MoveFactory* f;
    NeutralAttack* n;
    TypedAttack* a;
    Attack* atk;
    bool isAlive;
    double Health;

  public:
    Guy() {
      f = nullptr;
      n = nullptr;
      a = nullptr;
      atk = nullptr;
      Health = 200;
      isAlive = true;
    }

    void setFactory(MoveFactory* f) {
      this -> f = f;
    }
    void set_moves(){
      
    }
    void attack(Guy* opponent) {
      atk -> atk(opponent);
    }

    void set_attack(Attack* atk) {
      this -> atk = atk;
    }
};



#endif