#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State11 : public State
{
public:
	State11() { name = "Etat 11"; }
	virtual ~State11();

	bool transition(Automate& automate, Symbole* symbole);
};
