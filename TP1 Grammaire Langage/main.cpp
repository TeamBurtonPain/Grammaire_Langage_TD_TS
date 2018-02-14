#include <iostream>
#include "lexer.h"
#include "Automate.h"


int main(void) {
   string chaine;
   for(;;)
   {
	   std::getline(cin, chaine);
	   Lexer l(chaine);
	   Automate automate;

	   Symbole * s;
	   while (!automate) {
		   s = l.Consulter();
		   s->Affiche();
		   cout << endl;
		   bool continuer = true;
		   while (continuer) {
			   continuer = automate.move(s);
		   }
		   l.Avancer();
	   }
	   
   }
 
   return 0;
}

