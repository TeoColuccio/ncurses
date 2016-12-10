/* attrs2.c */

/* cambiare gli attributi dei caratteri */

#include <ncurses.h>

int main()
{
  initscr();
  curs_set(0);

  mvaddstr(10, 20, "Hello, NCurses");

  /* scrive un solo carattere e ne imposta gli attributi */
  mvaddch(15, 20, 'A' | A_BOLD | A_UNDERLINE);
  /* stampa un altro carattere, come? */
  mvaddch(16, 20, 'B');

  refresh();

  getch();

  endwin();

  return 0;
}
