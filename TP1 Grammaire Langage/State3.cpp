#include "State3.h"

State3::~State3()
{
}

bool State3::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
	case MULT:
	case CLOSEPAR:
	case FIN:
		automate.reduction(1, new Symbole(7));
		break;
	default:
		automate.decalage(symbole, new StateError);
	}
	return false;
}
