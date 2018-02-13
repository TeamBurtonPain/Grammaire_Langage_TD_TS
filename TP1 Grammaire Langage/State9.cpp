#include "State9.h"
#include "StateError.h"



State9::State9()
{
}


State9::~State9()
{
}

bool State9::transition(Automate & automate, Symbole * symbole)
{
	switch (*symbole) {
	case PLUS:
	case CLOSEPAR:
	case FIN:
	case MULT:
	{
		automate.putSymbole(symbole);
		automate.popAndDestroySymbole();
		Expr * s1 = (Expr *) automate.popSymbole();
		automate.popAndDestroySymbole();
		automate.reduction(3, new ExprPar(s1));
		break;
	}
	default:
		automate.decalage(symbole, new StateError);
	}
	return false;
}
