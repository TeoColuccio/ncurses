#include <stdio.h>      /* NO! */
#include <ncurses.h>

#include "guess.h"

void guess_init()
{
  initscr();
  curs_set(1);
  echo();

  guess_init();
}

void guess_stampa_intestazione_nc()
{
  attron(A_BOLD);
  printw("%s\n", guess_stampa_intestazione());
  attroff(A_BOLD);
}

char* guess_check_nc(int number, int guess)
{
  printw("%s\n", guess_check(number, guess));
}

void guess_end()
{
  refresh();
  getch();          /* questo dara' fastidio */
  endwin();
}
