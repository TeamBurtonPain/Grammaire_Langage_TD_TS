#include "StateError.h"

using namespace std;

StateError::~StateError()
{
}

bool StateError::transition(Automate& automate, Symbole* symbole)
{
	automate.abort();
	cout << "Transition depuis un �tat d'erreur" << endl;
	return false;
}
