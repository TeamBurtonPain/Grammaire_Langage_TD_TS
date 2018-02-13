#pragma once
#include "symbole.h"
class Automate;
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

