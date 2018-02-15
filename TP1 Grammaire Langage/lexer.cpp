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
			   else if((flux[tete] <= 'Z' && flux[tete] >= 'A') || (flux[tete] <= 'z' && flux[tete] >= 'a'))
			   {
				   stringstream ss;
				   int i = 0;
				   while((flux[tete+i] <= 'Z' && flux[tete + i] >= 'A') || (flux[tete + i] <= 'z' && flux[tete + i] >= 'a'))
				   {
					   ss << flux[tete + i];
					   ++i;
				   }
				   tete += i;

				   string name = ss.str();
				   tampon = new Variable(name);

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

