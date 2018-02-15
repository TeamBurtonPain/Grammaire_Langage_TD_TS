#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State12 : public State
{
public:
	State12() { name = "Etat 12"; }
	virtual ~State12();

	bool transition(Automate& automate, Symbole* symbole);
};
