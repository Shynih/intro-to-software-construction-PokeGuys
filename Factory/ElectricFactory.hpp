#ifndef __ELECTRICFACTORY__
#define __ELECTRICFACTORY__

#include "MoveFactory.hpp"

class ElectricFactory : public MoveFactory {
	public:
		ElectricFactory() : MoveFactory() {}
		virtual TypedAttack* createTypedMove() {
			TypedAttack* temp = new ElectricAttack("electric", 30);
        		return temp;
		}
    		virtual NeutralAttack* createNeutralMove() {
			NeutralAttack* temp = new RamAttack("normal", 50);
			return temp;		            
    		}
};

#endif
