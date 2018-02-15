#include "State11.h"
#include "State3.h"
#include "State2.h"
#include "StateError.h"
#include "State13.h"


State11::~State11()
{
}

bool State11::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole) {
	case REEL:
		automate.decalage(symbole, new State3);
		break;
	case OPENPAR:
		automate.decalage(symbole, new State2);
		break;
	case EXPR:
		automate.decalage(symbole, new State13);
		break;
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
