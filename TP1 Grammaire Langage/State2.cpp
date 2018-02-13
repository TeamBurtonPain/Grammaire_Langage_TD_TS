#include "State2.h"
#include "State0.h"

State2::~State2()
{
}

bool State2::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case INT:
		automate.decalage(symbole, new State3);
		break;
	case OPENPAR:
		automate.decalage(symbole, new State2);
		break;
	case EXPR:
		automate.decalage(symbole, new State6);
		break;
	default:
		automate.decalage(symbole, new StateError);

	}
	return false;
}
