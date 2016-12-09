/* figure.c */

/* stampa una strana figura con le ncurses */

#include <ncurses.h>

int main() 
{
  int i = 0, r = 4, c = 1;
  
  initscr();

  curs_set(0);

  printw(" *\n");
  printw("* *\n");
  printw(" *");

  while (i < 5) {
  mvaddstr(r, c, "*\n"); 
  c++;
  r++;
  i++;
  }

  refresh();
  getch();
  endwin();

  return 0;
}
