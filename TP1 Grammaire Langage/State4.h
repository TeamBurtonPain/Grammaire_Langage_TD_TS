#pragma once
#include "State.h"
#include "State2.h"
#include "State3.h"
#include "State7.h"
#include "StateError.h"
class State4 : public State
{
public:
	State4() { name = "Etat 4"; }
	virtual ~State4();

	bool transition(Automate& automate, Symbole* symbole);
};

