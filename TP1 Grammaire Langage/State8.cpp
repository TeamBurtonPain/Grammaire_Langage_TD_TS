#include "State8.h"
#include "StateError.h"

State8::~State8()
{
}

bool State8::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
	case MULT:
	case CLOSEPAR:
	case FIN:
	{
		Expr * s1 = (Expr *)automate.popSymbole();
		automate.popAndDestroySymbole();
		Expr * s2 = (Expr *)automate.popSymbole();
		automate.reduction(3, new ExprMult(s1, s2));
		return true;
		break;
	}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;

	}
	return false;
}
