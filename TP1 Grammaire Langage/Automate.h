#pragma once
#include <stack>
#include "symbole.h"
#include "State.h"

using namespace std;

class Automate
{
public:

	Automate()
	{
		state_stack//.push();
	}
	~Automate();

	void decalage(Symbole * s, State * st);

	void reduction(int n, Symbole * s);

protected:
	stack<Symbole> symbol_stack;
	stack<State> state_stack;
};

