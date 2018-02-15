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

	const Table_valeur & getVariables()const { return variables; }

	/// <summary>
	/// Add a variable to the table of values
	/// </summary>
	/// <param name="name">The name of the variable</param>
	/// <param name="val">The value of the variable</param>
	/// <returns>true if a previous value has been erased, else false</returns>
	bool addVariable(string name, double val)
	{
		bool ret = true;
		if(variables.find(name) == variables.end())
		{
			ret = false;
		}
		variables[name] = val;
		return ret;
	}
protected:
	deque<Symbole* > symbol_stack;
	deque<State* > state_stack;
	Table_valeur variables;
	bool termine;
};
