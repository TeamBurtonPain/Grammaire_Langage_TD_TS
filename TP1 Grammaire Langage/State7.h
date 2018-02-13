#pragma once
#include "State.h"


class State7 : public State
{
public:
	State7() { name = "Etat 7"; }
	virtual ~State7();

	bool transition(Automate& automate, Symbole* symbole);
};

