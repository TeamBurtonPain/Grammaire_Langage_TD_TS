#pragma once
#include "State.h"


class State5 : public State {
public:
	State5()
	{
		name = "Etat 5";
	}
	virtual ~State5();
	bool transition(Automate& automate, Symbole* symbole);
};

