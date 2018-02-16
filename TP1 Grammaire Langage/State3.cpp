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
	case SUB:
	case DIV:
	case CLOSEPAR:
	case FIN:
		{
			Reel * s = (Reel *) automate.popSymbole();
			automate.reduction(1, new Expr(s->eval()));
			delete(s);
			return true;
		}
	default:
		cout << "Symbole ignoré : " << Etiquettes[*symbole] << endl;
	}
	return false;
}
