#pragma once
#include "State.h"

class State6 : public State {
public:
	State6()
	{
		name = "Etat 6";
	}
	virtual ~State6();
	bool transition(Automate& automate, Symbole* symbole);
};

