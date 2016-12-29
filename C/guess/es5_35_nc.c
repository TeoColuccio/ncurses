/* C
   Deitel
   Esercizio 5.35 con le ncurses */

/* Indovina il numero */

#include <stdio.h>    /* ? */
/* dov'e' guess_nc? */
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
      while ((guess = getch() != '\n'))       /* devi aggiustare tutti questi input */
        ;                                     /* ora hai a disposizione le ncurses */
      scanw("%d\n", &guess);
      guess_check_nc(numero, guess);
    } while (guess != numero);

    /* clear the buffer */                     /* anche qui */
    while ((ans=getchar()) != '\n')
      ;
    /* read the answer */                      /* e qui */
    ans = getchar();

  } while (ans=='y');

  guess_end();

  return 0;
}
