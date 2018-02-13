#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;

class State2 : public State {
public:
	State2()
	{
		name = "Etat 2";
	}
	virtual ~State2();
	bool transition(Automate& automate, Symbole* symbole);
};

