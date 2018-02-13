#pragma once
#include <stack>
#include "symbole.h"
#include "State.h"

using namespace std;

class Automate
{
public:

	Automate();
	~Automate();

protected:
	stack<Symbole> symbol_stack;
	stack<State> state_stack;
};

