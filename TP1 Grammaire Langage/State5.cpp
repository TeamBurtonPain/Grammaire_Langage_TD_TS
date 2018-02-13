#include "State5.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"
#include "StateError.h"

State5::~State5()
{
}

bool State5::transition(Automate& automate, Symbole* symbole)
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
		automate.decalage(symbole, new State8);
		break;
	default:
		automate.decalage(symbole, new StateError);

	}
	return false;
}
