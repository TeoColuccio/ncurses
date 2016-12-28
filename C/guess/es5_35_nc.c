/* C
   Deitel
   Esercizio 5.35 con le ncurses */

/* Indovina il numero */

#include <stdio.h>
#include "guess.h"

int main()
{  
  int numero;
  int guess;
  int ans = 'y';

  guess_init();

  do {
    /* bug
     *
     * la funzione guess_stampa_intestazione() non
     * accetta minimo e massimo tra cui indovinare
     * e stampa sempre 1 e 1000
     */
    guess_stampa_intestazione();

    /* nota:
     *
     * non modificare i parametri 1 e 1000
     * altrimenti l'intestazione non sara' coerente
     */
    numero = guess_number(1, 4);
    
    do {
      mvprintw(9, 2, "? ");
      while ((guess = getch() != '\n')) 
        ;
      scanw("%d\n", &guess);
    } while (guess_check(numero, guess)!=0);
    
    /* clear the buffer */
    while ((ans=getchar()) != '\n')
      ;
    /* read the answer */
    ans = getchar();
    
  } while (ans=='y');
 
  guess_end();

  return 0;
}
