#include "State7.h"
#include "State5.h"
#include "StateError.h"
#include "State11.h"


State7::~State7()
{
}

bool State7::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
	case SUB:
	case CLOSEPAR:
	case FIN:
		{
			Expr * s1 = (Expr *)automate.popSymbole();
			automate.popAndDestroySymbole();
			Expr * s2 = (Expr *)automate.popSymbole();
			automate.reduction(3, new ExprPlus(s2, s1));
			delete(s1);
			delete(s2);
			return true;
		}
	case MULT:
		automate.decalage(symbole, new State5);
		break;
	case DIV:
		automate.decalage(symbole, new State11);
		break;
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
