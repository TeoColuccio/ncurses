#include <ncurses.h>

#include "guess_nc.h"
#include "guess.h"

void guess_nc_init()
{
  initscr();
  curs_set(1);
  echo();

  guess_init();
}

void guess_nc_stampa_intestazione()
{
  attron(A_BOLD);
  printw("%s\n", guess_stampa_intestazione());
  attroff(A_BOLD);
}

char* guess_nc_check(int number, int guess)
{
  printw("%s\n", guess_check(number, guess));
}

void guess_nc_end()
{
  refresh();
  endwin();
}
