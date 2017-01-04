/* C
   Deitel
   Esercizio 5.35 con le ncurses */

/* Indovina il numero */

#include "guess_nc.h"

int main()
{
  int numero;
  int guess;
  int ans = 'y';

  guess_nc_init();

  do {
    /* bug
     *
     * la funzione guess_stampa_intestazione() non
     * accetta minimo e massimo tra cui indovinare
     * e stampa sempre 1 e 1000
     */
    guess_nc_stampa_intestazione();

    /* nota:
     *
     * non modificare i parametri 1 e 1000
     * altrimenti l'intestazione non sara' coerente
     */
    numero = guess_number(1, 4);

    do {
      mvprintw(9, 2, "? ");
      scanw("%d\n", &guess);
      guess_nc_check(numero, guess);
    } while (guess != numero);

    /* read the answer */                      /* e qui */
    ans = getch();

  } while (ans=='y');

  guess_nc_end();

  return 0;
}
