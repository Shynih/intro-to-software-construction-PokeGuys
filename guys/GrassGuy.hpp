#ifndef __GRASS_GUY_HPP__
#define __GRASS_GUY_HPP__

#include "Guy.hpp"

class GrassGuy : public Guy {
  private:
    string weakness;
  public:
    GrassGuy() : Guy() {
      this -> f = new GrassFactory();
      weakness = "Fire";
      typedAtkName = "Leaf Blade";
      neutralAtkName = "Punch";
    }
    virtual string getWeakness() {
      return weakness;
    }

};


#endif
