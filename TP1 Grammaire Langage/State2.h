#pragma once
#include "State.h"
#include "State3.h"

class State2 : public State {
public:
	State2()
	{
		name = "Etat 2";
	}
	virtual ~State2();
	bool transition(Automate& automate, Symbole* symbole);
};

