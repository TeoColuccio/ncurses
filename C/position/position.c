/* position.c */

/* spostare il cursore */

#include <ncurses.h>

int main()
{
  initscr();

  /* rende invisibile il cursore */
  curs_set(0);
  /*
   * i valori possibili sono:
   * 0    invisibile
   * 1    visibile
   * 2    molto visibile
   */

  /* utilizzando le librerie ncurses possiamo
   * decidere dove stampare sullo schermo.
   * move() sposta il cursore.
   */
  move(5, 10);  /* sesta riga (n. 5), undicesima colonna (n. 10) (righe e colonne partono da 0) */
  addstr("Questa stringa viene stampata alla riga di indice 5 e colonna di indice 10");

  /* Olte alle funzioni printw(), addch() e addstr() esistono anche le
   * corrispondenti funzioni mvprintw(), mvaddch(), mvaddstr()
   * che permettono di specificare la posizione di stampa
   * senza dover chiamare prima move().
   */
  mvaddstr(10, 20, "Hello, Ncurses");
  mvaddstr(20, 20, "Premi un tasto per uscire");

  refresh();

  getch();

  endwin();

  return 0;
}
