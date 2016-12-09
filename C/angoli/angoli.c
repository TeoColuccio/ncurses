/* angoli.c */

/* stampa un '*' agli angoli del terminale */

#include <ncurses.h>

int main()
{
  int r, c;
 
  initscr();

  curs_set(0);

  getmaxyx(stdscr, r, c);

  mvaddstr(0, 0, "*");
  mvaddstr(r, 0, "*");
  mvaddstr(0, c, "*");
  mvaddstr(r, c, "*");

  refresh();
  getch();
  endwin();

  return 0;
}
