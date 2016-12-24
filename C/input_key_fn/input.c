/* input.c */

/* utilizzo dei tasti funzione F1, F2, ecc */

#include <ncurses.h>

int main()
{
  int car;      /* carattere letto */

  initscr();
  curs_set(0);  /* rende invisibile il cursore */
  noecho();     /* rende invisibili i caratteri digitati dall'utente */
  keypad(stdscr, TRUE); /* abilita tasti funzione, frecce, ecc */

  mvprintw(3, 5, "Premi F2 per continuare:");

  while ((car = getch()) != KEY_F(2))
    ;

  mvprintw(7, 5, "OK, F2 premuto");
  refresh();

  mvprintw(18, 5, "Premi un tasto per uscire");
  refresh();

  getch();

  endwin();

  return 0;
}
