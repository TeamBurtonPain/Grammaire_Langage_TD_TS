#pragma once
#include "Automate.h"
#include "symbole.h"

class State
{
public:
	State();
	virtual ~State();
	void print() const;
	virtual bool transition(Automate & automate, Symbole * symbole) = 0;
protected:
	string name;
};

