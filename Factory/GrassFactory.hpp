#ifndef __GRASSFACTORY__
#define __GRASSFACTORY__

#include "MoveFactory.hpp"

class GrassFactory : public MoveFactory {
	public:
		GrassFactory() : MoveFactory() {}
		virtual TypedAttack* createTypedMove() {
			TypedAttack* temp =  new GrassAttack("grass", 30);
			return temp;
		}
		virtual NeutralAttack* createNeutralMove() {
			NeutralAttack* temp =  new PunchAttack("normal", 50);
			return temp;
		}
};

#endif
