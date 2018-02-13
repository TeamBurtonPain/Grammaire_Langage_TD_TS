#pragma once
#include "State.h"
class State9 :
	public State
{
public:
	State9();
	virtual ~State9();

	bool transition(Automate& automate, Symbole* symbole);
};

