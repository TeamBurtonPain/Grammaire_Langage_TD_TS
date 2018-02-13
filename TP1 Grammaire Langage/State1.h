#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State1 : public State
{
public:
	State1() { name = "Etat 1"; }
	virtual ~State1();

	bool transition(Automate& automate, Symbole* symbole);
};

