#include <ncurses.h>
#include "quadrati.h"

void drow_init()
{
  initscr();
  curs_set(0);
  
  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
}

void drow_square(int colore, int altezza, int larghezza, int colonna_iniziale, int riga_iniziale) 
{ 
  start_color();

  init_pair(1, COLOR_BLACK, COLOR_WHITE);
  init_pair(2, COLOR_BLACK, COLOR_GREEN);  
  
  int i = 0, conta = 0;

  attron(COLOR_PAIR(colore)); 
  while (i < altezza) {
    while (conta < larghezza) {
      mvaddstr(riga_iniziale, colonna_iniziale, " ");
      colonna_iniziale++;
      conta++;
    }
    riga_iniziale++;
    i++;
  }
  attroff(COLOR_PAIR(colore));
}

void drow_end()
{ 
  refresh();
  getch();
  endwin();
}
