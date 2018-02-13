#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State3 : public State {
public:
	State3() { name = "Etat 3"; }
	virtual ~State3();
	bool transition(Automate& automate, Symbole* symbole);
};

