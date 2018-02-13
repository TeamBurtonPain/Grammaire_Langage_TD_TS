#include "Automate.h"
#include <iostream>

using namespace std;

Automate::~Automate()
{
}

Symbole* Automate::popSymbole()
{
	Symbole * s = symbol_stack.back();
	symbol_stack.pop_back();
	return s;
}

bool Automate::move(Symbole* s)
{
	State * st = state_stack.back();
	return st->transition(*this, s);
}

void Automate::putSymbole(Symbole * s)
{
	symbol_stack.push_back(s);
}

void Automate::popAndDestroySymbole()
{
	symbol_stack.pop_back();
	return;
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
	state_stack.back()->transition(*this, s);
}

void Automate::accepter()
{
	termine = true;
	cout << "Expression analysée : valeur = " << ((Expr *)symbol_stack.back())->eval() << endl;
}
