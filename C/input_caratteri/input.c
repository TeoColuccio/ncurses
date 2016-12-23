/* input.c */

/* input di caratteri */

#include <ncurses.h>

int main()
{
  int car;      /* carattere letto */

  initscr();
  curs_set(0);  /* rende invisibile il cursore */
  noecho();     /* rende invisibili i caratteri digitati dall'utente */

  mvprintw(3, 5, "Digita un carattere:");

  car = getch();
  mvprintw(7, 5, "Hai digitato %c", car);
  refresh();

  mvprintw(10, 5, "Digita un altro carattere:");
  car = getch();
  mvprintw(14, 5, "Hai digitato %c", car);

  mvprintw(18, 5, "Premi un tasto per uscire");
  refresh();

  getch();

  endwin();

  return 0;
}
