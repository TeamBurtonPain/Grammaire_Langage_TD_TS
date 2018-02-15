#include "State1.h"
#include "State4.h"
#include "State5.h"
#include "StateError.h"
#include "State10.h"
#include "State11.h"

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
	case SUB:
		automate.decalage(symbole, new State10);
		break;
	case DIV:
		automate.decalage(symbole, new State11);
		break;
	case FIN:
		automate.accepter();
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}


