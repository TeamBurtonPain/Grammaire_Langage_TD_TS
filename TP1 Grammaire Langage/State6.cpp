#include "State6.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"
#include "State10.h"
#include "State11.h"
#include "StateError.h"


State6::~State6()
{
}

bool State6::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
		automate.decalage(symbole, new State4);
		break;
	case MULT:
		automate.decalage(symbole, new State5);
		break;
	case SUB:
		automate.decalage(symbole, new State10);
		break;
	case DIV:
		automate.decalage(symbole, new State11);
		break;
	case CLOSEPAR:
		automate.decalage(symbole, new State9);
		break;
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;

	}
	return false;
}
