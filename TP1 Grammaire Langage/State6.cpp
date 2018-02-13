#include "State6.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"
#include "StateError.h"

State6::~State6()
{
}

bool State6::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
		automate.decalage(symbole, new State4);
		break;
	case MULT:
		automate.decalage(symbole, new State5);
		break;
	case CLOSEPAR:
		automate.decalage(symbole, new State9);
		break;
	default:
		automate.decalage(symbole, new StateError);

	}
	return false;
}
