#include <stdio.h>
#include <ncurses.h>

#include "guess.h"
#include "random.h"

void guess_init()
{
  initscr();
  curs_set(1);
  echo();

  random_init();
}

int guess_number(int min, int max)
{
  return random_between(min, max+1);
}

void guess_stampa_intestazione()
{
  attron(A_BOLD);
  mvprintw(2, 2, "I have a number between 1 and 1000.\n"
      "  Can you guess my number?\n"
      "  Please type the first guess.\n");
  attroff(A_BOLD);
}

int guess_check(int number, int guess)
{
  move(16, 2);
  if (number==guess) {
    printw("Either you know the secret or you got lucky!\n\n"
        "Would you like to play again (y or n)? ");
  } else if (number<guess) {
    printw("Too high. Try again.\n");
  } else {
    printw("Too low. Try again.\n");
  }
  
  return guess-number;
}

void guess_end()
{
  refresh();
  getch();
  endwin();
}
