#pragma once
#include "State.h"


class State8 : public State {
public:
	State8()
	{
		name = "Etat 8";
	}
	virtual ~State8();
	bool transition(Automate& automate, Symbole* symbole);
};

