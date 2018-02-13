#pragma once
#include <iostream>
#include "State.h"
#include "Automate.h"

class StateError : public State
{
public:
	StateError() { name = "Erreur"; }
	virtual ~StateError();
	bool transition(Automate& automate, Symbole* symbole);
};

