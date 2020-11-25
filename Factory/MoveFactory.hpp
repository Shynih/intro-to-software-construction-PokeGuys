#ifndef __MOVEFACTORY__
#define __MOVEFACTORY__

class MoveFactory {
	public:
		virtual TypedAttack* createTypedMove() = 0;
		virtual NeutralAttack* createNeutralMove() = 0;
};

#endif
