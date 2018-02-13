#pragma once
#include "State.h"

class State4 : public State
{
public:
	State4() { name = "Etat 4"; }
	virtual ~State4();

	bool transition(Automate& automate, Symbole* symbole);
};

