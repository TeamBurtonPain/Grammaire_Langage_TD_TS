#pragma once
#include "State.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"

class State0 : public State {
public:
	State0(){name = "Etat 0";}
	virtual ~State0();
	bool transition(Automate& automate, Symbole* symbole);
};

