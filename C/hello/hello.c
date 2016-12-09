/* hello.c */

/* introduzione alle librerie ncurses */

#include <ncurses.h>

int main()
{
  /* inizializza */
  initscr();

  /* stampa.
   * La funzione printw() e' equivalente a printf().
   * Altre funzioni per la stampa sono addch() (stampa un carattere, equivalente a putchar())
   * e addstr() (equivalente a puts()).
   */
  printw("Hello, Ncurses\n");
  printw("Premi un tasto per uscire");

  /* Quando si stampa a video con le ncurses,
   * il testo non compare direttamente sullo schermo.
   * Viene, invece, stampato su uno schermo virtuale.
   * La funzione refresh() copia lo schermo virtuale
   * su quello fisico.
   * In questo modo si possono fare tante modifiche
   * e poi visualizzarle tutte insieme.
   */
  refresh();

  /* per evitare che il programma termini immediatamente
   * attende un tasto
   */
  getch();

  /* prima di terminare un programma ncurses e' meglio
   * chiamare la funzione endwin() altrimenti il terminale
   * potrebbe non funzionare correttamente.
   */
  endwin();

  return 0;
}
