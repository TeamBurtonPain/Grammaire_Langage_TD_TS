#include "State4.h"



State4::State4()
{
}


State4::~State4()
{
}

bool State4::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case INT:
		automate.decalage(symbole, new State3);
		break;
	case OPENPAR:
		automate.decalage(symbole, new State2);
		break;
	case EXPR:
		automate.decalage(symbole, new State7);
		break;
	default:
		automate.decalage(symbole, new StateError)
	}
	return false;
}
