#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Reel::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

