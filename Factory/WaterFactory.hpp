#ifndef __WATERFACTORY__
#define __WATERFACTORY__

#include "MoveFactory.hpp"

class WaterFactory : public  MoveFactory {
	public:
		WaterFactory() : MoveFactory() {}
		virtual TypedAttack* createTypedMove() {
			TypedAttack* temp =  new WaterAttack("water", 30);
			return temp;
		}
		virtual NeutralAttack* createNeutralMove() {
			NeutralAttack* temp =  new DropAttack("normal", 50);
			return temp;
		}
};

#endif
