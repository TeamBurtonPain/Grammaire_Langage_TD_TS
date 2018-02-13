#include "State9.h"



State9::State9()
{
}


State9::~State9()
{
}

bool State9::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
	case CLOSEPAR:
	case FIN:
	case MULT:
		automate.reduction(3, new Symbole(7));
		break;
	default:
		automate.decalage(symbole, new StateError)
	}
	return false;
}
