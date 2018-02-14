#include "State4.h"
#include "State2.h"
#include "State3.h"
#include "State7.h"
#include "StateError.h"


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
	case FIN:
		automate.decalage(symbole, new StateError);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
