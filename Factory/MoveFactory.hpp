#ifndef __MOVEFACTORY__
#define __MOVEFACTORY__

#include <string>
#include "../Attacks/TypedAttack.hpp"
#include "../Attacks/NeutralAttack.hpp"
#include "../Attacks/Moves/RamAttack.hpp"
#include "../Attacks/Moves/WaterAttack.hpp"
#include "../Attacks/Moves/PunchAttack.hpp"
#include "../Attacks/Moves/GrassAttack.hpp"
#include "../Attacks/Moves/FireAttack.hpp"
#include "../Attacks/Moves/ElectricAttack.hpp"
#include "../Attacks/Moves/DropAttack.hpp"
#include "../Attacks/Moves/ClawAttack.hpp"


class MoveFactory {
	public:
		MoveFactory() {}
		virtual TypedAttack* createTypedMove() = 0;
		virtual NeutralAttack* createNeutralMove() = 0;
};

#endif
