#pragma once
#include "State.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"

class State8 : public State {
public:
	State8()
	{
		name = "Etat 8";
	}
	virtual ~State8();
	bool transition(Automate& automate, Symbole* symbole);
};

