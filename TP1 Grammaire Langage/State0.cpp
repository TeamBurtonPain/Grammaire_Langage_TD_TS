#include "State0.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"
#include "StateError.h"

State0::~State0()
{
}

bool State0::transition(Automate& automate, Symbole* symbole)
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
		automate.decalage(symbole, new State1);
		break;
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignor� : " << Etiquettes[*symbole] << endl;

	}
	return false;
}
