/* quadrati.c */

/* disegno dei quadrati con le ncurses */

#include <stdlib.h>
#include <ncurses.h>

int scambio_colore(int color);

int main()
{
  int i = 0, righe_quadrati = 2, righe_scacchiera = 0, colonne_scacchiera = 10, colore = 1;

  initscr();
  curs_set(0);

  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
  
  start_color();

  init_pair(1, COLOR_BLACK, COLOR_RED); /* Primo colore */
  init_pair(2, COLOR_BLACK, COLOR_WHITE); /* Secondo colore */
  
  while (colonne_scacchiera < 66) {
    righe_scacchiera = 0; /* Riporto al valore iniziale il numero delle righe */
    righe_quadrati = 2; /* Riporto alla riga dove deve stampare */
    
    colore = scambio_colore(colore);
    
    while (righe_scacchiera < 4) { /* Stampa 8 quadrati */
     
      colore = scambio_colore(colore);

      /* Stampa primo quadrato */
      attron(COLOR_PAIR(colore));
      for (i = 0; i < 4; i++) {
        mvaddstr(righe_quadrati, colonne_scacchiera, "       ");
        righe_quadrati++;
      }
      attroff(COLOR_PAIR(colore));
    
      colore = scambio_colore(colore);
      
      /* Stampa secondo quadrato */
      attron(COLOR_PAIR(colore));
      for (i = 0; i < 4; i++) {
        mvaddstr(righe_quadrati, colonne_scacchiera, "       "); 
        righe_quadrati++;
      }
      attroff(COLOR_PAIR(colore));

      righe_scacchiera++; /* Aggiorna il numero di righe */
    }
    colonne_scacchiera += 7; /* Aggiungo 7 (numero degli " ") alle colonne */
  }
  
  refresh();
  getch();
  endwin();

  return 0;
  
}

/* Funzione per lo scambio di colore */
int scambio_colore(int color)
{
  if (color == 1)
    return 2;
  else
    return 1;
}
