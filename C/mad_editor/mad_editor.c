#include <ncurses.h>

#include "mad_editor.h"
#include "random.h"

void mad_init()
{
  initscr();
  noecho();
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
  
  attr = random_between(0, 3);
  
  switch (attr) {
    case 0: 
      attron(A_UNDERLINE);
      mvprintw(random_between(0, rows), random_between(0, cols), "%c", c);
      attroff(A_UNDERLINE);
      break;
    case 1:
      attron(A_BOLD);
      mvprintw(random_between(0, rows), random_between(0, cols), "%c", c);
      attroff(A_BOLD);
      break; 
    case 2:
      attron(A_STANDOUT);
      mvprintw(random_between(0, rows), random_between(0, cols), "%c", c);
      attroff(A_STANDOUT);
      break;
  } 
}

void mad_stampa_carattere_ciclo()
{ 
  int c, car;

  while ((car = getch()) != KEY_F(2)) {
    c = getch();
    mad_stampa_carattere(c);
    refresh();
  }
}

void mad_end()
{
  refresh;
  getch();
  endwin();
}
