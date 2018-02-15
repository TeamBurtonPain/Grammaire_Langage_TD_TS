#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State10 : public State
{
public:
	State10() { name = "Etat 10"; }
	virtual ~State10();

	bool transition(Automate& automate, Symbole* symbole);
};

