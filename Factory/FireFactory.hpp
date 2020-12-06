#ifndef __FIREFACTORY__
#define __FIREFACTORY__

#include "MoveFactory.hpp"

class FireFactory : public MoveFactory {
	public:
		FireFactory() : MoveFactory()  {}
		virtual TypedAttack* createTypedMove() {
                	TypedAttack* temp =  new FireAttack("fire", 30);
			return temp;
		}
		virtual NeutralAttack* createNeutralMove() {
			NeutralAttack* temp =  new ClawAttack("normal", 50);		   
			return temp;         
	        }
};

#endif
