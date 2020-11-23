#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

class Guy;

class Attack() {
  protected:
    NeutralAttack* n;
    TypedAttack* a;
  public:
    Attack(NeutralAttack* n, TypedAttack* a) {
      this -> n = n;
      this -> a = a;
    }
    virtual void atk(Guy* guy) = 0;
};

#endif