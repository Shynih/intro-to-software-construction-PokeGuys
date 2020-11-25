#ifndef __FIREFACTORY__
#define __FIREFACTORY__

#include "MoveFactory.hpp"
#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"

class FireFactory : public MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() {
                
		}
		virtual NeutralAttack* createNeutralMove() {
				            
	        }
};

#endif