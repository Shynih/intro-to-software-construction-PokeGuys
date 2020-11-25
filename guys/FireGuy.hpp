#ifndef __FIRE_GUY_HPP__
#define __FIRE_GUY_HPP__

#include "Guy.hpp"

class FireGuy : public Guy {
  private:
    string weakness;
  public:
    FireGuy() {
      
    }
    string getWeakness() {
      return weakness;
    }

};


#endif