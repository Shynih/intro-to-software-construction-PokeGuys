#ifndef __GRASSFACTORY__
#define __GRASSFACTORY__

#include "MoveFactory.hpp"
<<<<<<< HEAD
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
=======

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
>>>>>>> 459e38d644feba111cfb46923958ffbfe34726d5
