#pragma once
#include "State.h"
#include "symbole.h"
#include "Automate.h"

class State;
class Automate;
class Symbole;
class State9 :
	public State
{
public:
	State9();
	virtual ~State9();

	bool transition(Automate& automate, Symbole* symbole);
};

