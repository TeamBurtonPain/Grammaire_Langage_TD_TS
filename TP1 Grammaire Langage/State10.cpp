#include "State10.h"
#include "State2.h"
#include "State3.h"
#include "State12.h"
#include "StateError.h"



State10::~State10()
{
}

bool State10::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole) {
	case REEL:
		automate.decalage(symbole, new State3);
		break;
	case OPENPAR:
		automate.decalage(symbole, new State2);
		break;
	case EXPR:
		automate.decalage(symbole, new State12);
		break;
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
