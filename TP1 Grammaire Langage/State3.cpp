#include "State3.h"
#include "StateError.h"

State3::~State3()
{
}

bool State3::transition(Automate& automate, Symbole* symbole)
{
	switch (*symbole)
	{
	case PLUS:
	case MULT:
	case CLOSEPAR:
	case FIN:
		{
			Entier * s = (Entier *) automate.popSymbole();
			automate.reduction(1, new Expr(s->eval()));
			return true;
			break;
		}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
