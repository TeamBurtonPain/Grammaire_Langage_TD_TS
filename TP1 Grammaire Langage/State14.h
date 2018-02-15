#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State14 : public State {
public:
	State14() { name = "Etat 14"; }
	virtual ~State14();
	bool transition(Automate& automate, Symbole* symbole);
};

