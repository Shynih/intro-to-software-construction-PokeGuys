#ifndef __ELECTRIC_GUY_HPP__
#define __ELECTRIC_GUY_HPP__

#include "Guy.hpp"
#include <string>

using namespace std;

class ElectricGuy : public Guy {
  private:
    string weakness;
  public:
    ElectricGuy() : Guy() {
      weakness = "Grass";
    }
    string getWeakness() {
      return weakness;
    }

};

#endif