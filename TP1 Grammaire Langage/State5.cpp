#include "State5.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"
#include "StateError.h"
#include "State14.h"

State5::~State5()
{
}

bool State5::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case REEL:
		automate.decalage(symbole, new State3);
		break;
	case VARIABLE:
		automate.decalage(symbole, new State14);
		break;
	case OPENPAR:
		automate.decalage(symbole, new State2);
		break;
	case EXPR:
		automate.decalage(symbole, new State8);
		break;
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;

	}
	return false;
}
