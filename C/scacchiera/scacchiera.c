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

void draw_four_square(int altezza_quadrato, int larghezza_quadrato, int colonna_iniziale, int riga_iniziale)
{
  int c = 0;

  while (c < 4) {
    draw_square(1, altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale);
    draw_square(1, altezza_quadrato, larghezza_quadrato, colonna_iniziale + larghezza_quadrato, riga_iniziale + altezza_quadrato);
    draw_square(2, altezza_quadrato, larghezza_quadrato, colonna_iniziale + larghezza_quadrato, riga_iniziale);
    draw_square(2, altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale + altezza_quadrato);
    
    riga_iniziale+= altezza_quadrato * 2;
    c++;
  }
}

void draw_chessboard(int altezza_quadrato, int larghezza_quadrato, int colonna_iniziale, int riga_iniziale)
{
  int i = 0, temp = riga_iniziale;

  while (i < 4) {
    draw_four_square(altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale);
    riga_iniziale = temp;
    colonna_iniziale+= larghezza_quadrato * 2;
    i++;
  }
}

void draw_end()
{ 
  refresh();
  getch();
  endwin();
}
