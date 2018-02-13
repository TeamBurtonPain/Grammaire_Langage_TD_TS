#pragma once
#include <deque>
#include "symbole.h"
#include "State.h"
#include "State0.h"
#include "lexer.h"

using namespace std;

class Automate
{
public:

	Automate() : termine(false)
	{
		state_stack.push_back(new State0);
	}
	~Automate();

	Symbole * popSymbole();

	bool move(Symbole * s);

	void putSymbole(Symbole * s);

	void popAndDestroySymbole();


	void decalage(Symbole * s, State * st);

	void reduction(int n, Symbole * s);

	void accepter();

	operator bool() const { return termine; }

	void abort() { termine = true; }

protected:
	deque<Symbole* > symbol_stack;
	deque<State* > state_stack;
	bool termine;
};
