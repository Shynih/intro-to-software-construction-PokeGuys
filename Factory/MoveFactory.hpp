#ifndef __MOVEFACTORY__
#define __MOVEFACTORY__

#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"

class NeutralAttack;
class TypedAttack;

class MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() = 0;
		virtual NeutralAttack* createNeutralMove() = 0;
};

#endif