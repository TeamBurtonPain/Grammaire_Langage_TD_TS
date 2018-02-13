#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;

class State7 : public State
{
public:
	State7() { name = "Etat 7"; }
	virtual ~State7();

	bool transition(Automate& automate, Symbole* symbole);
};

