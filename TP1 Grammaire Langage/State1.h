#pragma once
#include "State.h"
#include "State4.h"
#include "State5.h"
#include "StateError.h"
class State1 : public State
{
public:
	State1() { name = "Etat 1"; }
	virtual ~State1();

	bool transition(Automate& automate, Symbole* symbole);
};

