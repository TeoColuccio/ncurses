#include <stdio.h>
#include <ncurses.h>

#include "guess.h"
#include "random.h"

void guess_init()
{
  initscr();
  curs_set(1);
  echo();

  /* perché richiami una funzione del modulo random?
    Hai il modulo guess a disposizione */
  random_init();
}

/* questa non serve, gia' ne abbiamo una in guess */
int guess_number(int min, int max)
{
  return random_between(min, max+1);
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
  getch();
  endwin();
}
