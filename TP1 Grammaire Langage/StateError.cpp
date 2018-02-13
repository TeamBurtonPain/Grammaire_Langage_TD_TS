#include "StateError.h"

using namespace std;

StateError::~StateError()
{
}

bool StateError::transition(Automate& automate, Symbole* symbole)
{
	cout << "Transition depuis un état d'erreur" << endl;
}
