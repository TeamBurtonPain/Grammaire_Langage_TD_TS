#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State13 : public State
{
public:
	State13() { name = "Etat 13"; }
	virtual ~State13();

	bool transition(Automate& automate, Symbole* symbole);
};
