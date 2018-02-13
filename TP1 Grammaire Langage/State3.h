#pragma once
#include "State.h"

class State3 : public State {
public:
	State3() { name = "Etat 3"; }
	virtual ~State3();
	bool transition(Automate& automate, Symbole* symbole);
};

