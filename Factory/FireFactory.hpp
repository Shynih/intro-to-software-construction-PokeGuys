#ifndef __FIREFACTORY__
#define __FIREFACTORY__

#include "MoveFactory.hpp"
<<<<<<< HEAD
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
=======

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
>>>>>>> 459e38d644feba111cfb46923958ffbfe34726d5
