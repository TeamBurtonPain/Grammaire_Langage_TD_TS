#include "State14.h"
#include "StateError.h"

State14::~State14()
{
}

bool State14::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
	case MULT:
	case SUB:
	case DIV:
	case CLOSEPAR:
	case FIN:
	{
		Variable * s = (Variable *)automate.popSymbole();
		automate.reduction(1, new Expr(s->eval(automate.getVariables())));
		return true;
	}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
