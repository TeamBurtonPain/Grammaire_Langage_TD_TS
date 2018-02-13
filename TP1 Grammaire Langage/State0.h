#pragma once
#include "State.h"
#include "symbole.h"


class State;
class Automate;
class Symbole;

class State0 : public State {
public:
	State0(){name = "Etat 0";}
	virtual ~State0();
	bool transition(Automate& automate, Symbole* symbole);
};

