#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State4 : public State
{
public:
	State4() { name = "Etat 4"; }
	virtual ~State4();

	bool transition(Automate& automate, Symbole* symbole);
};

