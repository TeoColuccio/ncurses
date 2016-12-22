#include <ncurses.h>
#include "scacchiera.h"

void draw_init()
{
  initscr();
  curs_set(0);

  if(!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
  
  start_color();
  init_pair(1, COLOR_BLACK, COLOR_WHITE);
  init_pair(2, COLOR_BLACK, COLOR_RED);  
}

void draw_square(int colore, int altezza, int larghezza, int colonna_iniziale, int riga_iniziale) 
{ 
  int i = 0, conta = 0, temp = colonna_iniziale;

  attron(COLOR_PAIR(colore)); 
  while (i < altezza) {
    conta = 0;
    colonna_iniziale = temp; 
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

void draw_end()
{ 
  refresh();
  getch();
  endwin();
}
