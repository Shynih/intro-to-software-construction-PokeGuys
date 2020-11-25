#ifndef __ELECTRICFACTORY__
#define __ELECTRICFACTORY__

#include "MoveFactory.hpp"
#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"

class EletricFactory : public MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() {
        
		}
    		virtual NeutralAttack* createNeutralMove() {
				            
    		}
};

#endif