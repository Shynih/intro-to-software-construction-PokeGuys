#ifndef __GRASSFACTORY__
#define __GRASSFACTORY__

#include "MoveFactory.hpp"
#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"

class GrassFactory : public MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() {
		
		}
		virtual NeutralAttack* createNeutralMove() {

		}
};

#endif