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
	case MULT:
	case SUB:
	case DIV:
	case CLOSEPAR:
	case FIN:
	{
		automate.popAndDestroySymbole();
		Expr * s1 = (Expr *) automate.popSymbole();
		automate.popAndDestroySymbole();
		automate.reduction(3, new ExprPar(s1));
		delete(s1);
		return true;
	}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
