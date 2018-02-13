#pragma once
#include "State.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"

class State5 : public State {
public:
	State5()
	{
		name = "Etat 5";
	}
	virtual ~State5();
	bool transition(Automate& automate, Symbole* symbole);
};

