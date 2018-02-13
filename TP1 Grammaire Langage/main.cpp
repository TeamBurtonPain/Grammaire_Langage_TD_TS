#include <iostream>
#include "lexer.h"
#include "Automate.h"


int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine);
   Automate automate;

   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
	  automate.move(s);
      cout<<endl;
      l.Avancer();
   }

   cin.get();
   return 0;
}

