#include "lexer.h"

Symbole * Lexer::Consulter() {
   if (!tampon) {

      if (tete==flux.length())
         tampon = new Symbole(FIN);
      else
      {

         switch (flux[tete]) {
            case '(':
               tampon = new Symbole(OPENPAR);
               tete++;
               break;
            case ')':
               tampon = new Symbole(CLOSEPAR);
               tete++;
               break;
            case '*':
               tampon = new Symbole(MULT);
               tete++;
               break;
            case '+':
               tampon = new Symbole(PLUS);
               tete++;
               break;
			case '-':
				tampon = new Symbole(SUB);
				tete++;
				break;
			case '/':
				tampon = new Symbole(DIV);
				tete++;
				break;
            default:
               if (flux[tete]<='9' && flux[tete]>='0') {
                  double resultat = flux[tete]-'0';
                  int i=1;
                  while (flux[tete+i]<='9' && flux[tete+i]>='0') {
                     resultat = resultat*10+(flux[tete+i]-'0');
                     i++;
                  }
				  if(flux[tete+i] == '.')
				  {
					  double puiss = 0.1;
					  ++i;
					  while(flux[tete + i] <= '9' && flux[tete + i] >= '0') {
						  resultat += double(flux[tete + i] - '0')*puiss;
						  puiss /= 10;
						  i++;
					  }
				  }
                  tete = tete+i;
                  tampon = new Reel(resultat);
               }
               else {
                  tampon = new Symbole(ERREUR);
               }
         }
      }
   }
   return tampon;
}

void Lexer::Avancer() {
   tampon = nullptr;
}

