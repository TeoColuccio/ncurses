#include <ncurses.h>

#include "scacchiera.h"

void scacchiera_init()
{
  initscr();
  curs_set(0);
  
  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
}

void scacchiera_drow(int larghezza, int colonne_scacchiera, int riga_iniziale, int numero_quadrati, int altezza_quadrati) 
{  

  int i = 0, righe_scacchiera = 0, temp = riga_iniziale, colore = 0;

  start_color();

  init_pair(1, COLOR_BLACK, COLOR_RED); 
  init_pair(2, COLOR_BLACK, COLOR_WHITE); 
      /* 10 < 66 */
  while (colonne_scacchiera < larghezza) {
    righe_scacchiera = 0; /* Riporto al valore iniziale il numero delle righe */
    riga_iniziale = temp; /* Riporto alla riga dove deve stampare */
    
    colore = scambio_colore(colore);
    
    while (righe_scacchiera < numero_quadrati * 2) { /* Stampa 8 quadrati */
     
      colore = scambio_colore(colore);

      /* Stampa primo quadrato */
      attron(COLOR_PAIR(colore));
      for (i = 0; i < altezza_quadrati; i++) {
        mvaddstr(riga_iniziale, colonne_scacchiera, "       ");
        riga_iniziale++;
      }
      attroff(COLOR_PAIR(colore));
    
      colore = scambio_colore(colore);
      
      /* Stampa secondo quadrato */
      attron(COLOR_PAIR(colore));
      for (i = 0; i < altezza_quadrati; i++) {
        mvaddstr(riga_iniziale, colonne_scacchiera, "       "); 
        riga_iniziale++;
      }
      attroff(COLOR_PAIR(colore));

      righe_scacchiera++; /* Aggiorna il numero di righe */
    }
    colonne_scacchiera += 7; /* Aggiungo 7 (numero degli " ") alle colonne */
  }

  attroff(COLOR_PAIR(colore));
}

int scambio_colore(int color)
{
  if (color == 1)
    return 2;
  else
    return 1;
}

void scacchiera_end()
{ 
  refresh();
  getch();
  endwin();
}
