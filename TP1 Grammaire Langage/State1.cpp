#include "State1.h"



State1::State1()
{
}


State1::~State1()
{
}

bool State1::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
		automate.decalage(symbole, new State4);
		break;
	case MULT:
		automate.decalage(symbole, new State5);
		break;
	case FIN:
		automate.accepter();
		break;
	default:
		automate.decalage(symbole, new StateError)
	}
	return false;
}


