#ifndef __WATER_GUY_HPP__
#define __WATER_GUY_HPP__

#include "Guy.hpp"

class WaterGuy : public Guy {
  private:
    string weakness;
  public:
    WaterGuy() : Guy () {
      weakness = "Electric";
      this -> f = new WaterFactory();
    }
    virtual string getWeakness() {
      return weakness;
    }

};
#endif