#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;

class State5 : public State {
public:
	State5()
	{
		name = "Etat 5";
	}
	virtual ~State5();
	bool transition(Automate& automate, Symbole* symbole);
};

