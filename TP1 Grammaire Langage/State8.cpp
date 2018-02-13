#include "State8.h"
#include "StateError.h"

State8::~State8()
{
}

bool State8::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
	case MULT:
	case CLOSEPAR:
	case FIN:
		automate.reduction(3, new Symbole(7));
		break;
	default:
		automate.decalage(symbole, new StateError);

	}
	return false;
}
