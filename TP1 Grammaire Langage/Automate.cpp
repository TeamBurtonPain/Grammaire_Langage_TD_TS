#include "Automate.h"



Automate::~Automate()
{
}

Symbole* Automate::popSymbole()
{
	Symbole * s = symbol_stack.back();
	symbol_stack.pop_back();
	return s;
}

void Automate::decalage(Symbole* s, State* st)
{
	symbol_stack.push_back(s);
	state_stack.push_back(st);
}

void Automate::reduction(int n, Symbole* s)
{
	for(int i=0; i<n; ++i)
	{
		delete(state_stack.back());
		state_stack.pop_back();
		
	}
	
}

void Automate::accepter()
{
}
