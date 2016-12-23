/* input_num.c */

/* input di numeri interi */

#include <ncurses.h>

int main()
{
  int num1;
  int num2;

  int somma;

  initscr();
  curs_set(1);  /* rende visibile il cursore */
  echo();       /* rende visibili i caratteri digitati dall'utente
                 * (in alternativa noecho())
                 */

  mvprintw(3, 5, "Somma di due interi");

  mvprintw(7, 5, "Primo addendo: ");
  scanw("%d", &num1);

  mvprintw(9, 5, "Secondo addendo: ");
  scanw("%d", &num2);

  somma = num1 + num2;

  mvprintw(12, 5, "Somma: ");
  attron(A_STANDOUT);
  printw("%d", somma);
  attroff(A_STANDOUT);

  mvprintw(18, 5, "Premi un tasto per uscire");

  refresh();

  getch();

  endwin();

  return 0;
}
