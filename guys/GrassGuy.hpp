#ifndef __GRASS_GUY_HPP__
#define __GRASS_GUY_HPP__

#include "Guy.hpp"

class GrassGuy : public Guy {
  private:
    string weakness;
  public:
    GrassGuy() {
      
    }
    string getWeakness() {
      return weakness;
    }

};


#endif