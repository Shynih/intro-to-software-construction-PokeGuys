#ifndef MULT_HPP
#define MULT_HPP

#include "base.hpp"
#include "op.hpp"
#include <sstream>

class Mult : public Base {
    private:
        double result;
        std::string sentence;
        Base* val1;
        Base* val2;
    public:
        Mult(Base* &val1, Base* &val2) : Base() {
          this -> val1 = val1;
          this -> val2 = val2;
        }
        virtual double evaluate() {
          result = val1 ->evaluate() * val2->evaluate();
          return result; 
        }
        virtual std::string stringify() { 
          std::stringstream stream;
          stream << val1 -> stringify() << " * " << val2 -> stringify();
          sentence = stream.str();
          return sentence;
        }
};

#endif