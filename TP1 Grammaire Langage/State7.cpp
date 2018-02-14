#include "State7.h"
#include "State5.h"
#include "StateError.h"



State7::~State7()
{
}

bool State7::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
	case CLOSEPAR:
	case FIN:
		{
			Expr * s1 = (Expr *)automate.popSymbole();
			automate.popAndDestroySymbole();
			Expr * s2 = (Expr *)automate.popSymbole();
			automate.reduction(3, new ExprPlus(s1, s2));
			return true;
			break;
		}
	case MULT:
		automate.decalage(symbole, new State5);
		break;

	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
