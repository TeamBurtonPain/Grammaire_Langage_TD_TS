#include "State7.h"



State7::State7()
{
}


State7::~State7()
{
}

bool State7::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
	case CLOSEPAR:
	case FIN:
		automate.reduction(3, new Symbole(7));
		break;
	case MULT:
		automate.decalage(symbole, new State5);
		break;
	default:
		automate.decalage(symbole, new StateError)
	}
	return false;
}
