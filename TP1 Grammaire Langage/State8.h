#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;

class State8 : public State {
public:
	State8()
	{
		name = "Etat 8";
	}
	virtual ~State8();
	bool transition(Automate& automate, Symbole* symbole);
};

