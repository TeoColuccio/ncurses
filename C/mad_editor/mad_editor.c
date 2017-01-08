#include <ncurses.h>

#include "mad_editor.h"
#include "random.h"

void mad_init()
{
  initscr();
  curs_set(0);
  keypad(stdscr, TRUE);
}

int mad_getmax_rows()
{
  int rows, cols; 
  getmaxyx(stdscr, rows, cols);
  return rows;
}

int mad_getmax_cols()
{
  int rows, cols; 
  getmaxyx(stdscr, rows, cols);
  return cols;
}

void mad_stampa_intestazione() 
{
  mvprintw(4, 4, "Questo e' un editor di testi matto\n    (Premi F2 per terminare)");
}

void mad_stampa_carattere(int c)
{
  int attr, rows = mad_getmax_rows(), cols = mad_getmax_cols();  
  mvprintw(random_between(0, rows), random_between(0, cols), "%c", c);
}

void mad_end()
{
  refresh;
  getch();
  endwin();
}
