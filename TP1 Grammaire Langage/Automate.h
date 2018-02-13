#pragma once
#include <deque>
#include "symbole.h"
#include "State.h"
#include "State0.h"

using namespace std;

class Automate
{
public:

	Automate()
	{
		state_stack.push_back(new State0);
	}
	~Automate();

	Symbole * popSymbole();

	void popAndDestroySymbole()
	{
		symbol_stack.pop_back();
		return;
	}

	void decalage(Symbole * s, State * st);

	void reduction(int n, Symbole * s);

	void accepter();

protected:
	deque<Symbole*> symbol_stack;
	deque<State*> state_stack;

};

