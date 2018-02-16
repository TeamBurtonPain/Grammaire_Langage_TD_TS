#include "State13.h"
#include <iostream>

State13::~State13()
{
}

bool State13::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole) {
	case PLUS:
	case CLOSEPAR:
	case SUB:
	case MULT:
	case DIV:
	case FIN:
	{
		Expr * s1 = (Expr *)automate.popSymbole();
		automate.popAndDestroySymbole();
		Expr * s2 = (Expr *)automate.popSymbole();
		automate.reduction(3, new ExprDiv(s2, s1));
		delete(s1);
		delete(s2);
		return true;
	}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
