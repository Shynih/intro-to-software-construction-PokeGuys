#ifndef __WATERFACTORY__
#define __WATERFACTORY__

#include "MoveFactory.hpp"
#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"

class WaterFactory : public  MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() {
			
		}
		virtual NeutralAttack* createNeutralMove() {

		}
};

#endif