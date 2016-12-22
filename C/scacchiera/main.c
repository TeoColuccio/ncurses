/* scacchiera.c */

/* disegno di una scacchiera con le ncurses */

#include <stdlib.h>

#include "scacchiera.h"

int main()
{
  int riga_iniziale = 1, colonna_iniziale = 9, altezza_quadrato = 3, larghezza_quadrato = 4;
  
  /* Nella funzione ho dichiarato le coppie di colore:
   * - 1 = COLOR_BLACK, COLOR_WHITE
   * - 2 = COLOR_BLACK, COLOR_RED
   * infatti nel primo parametro bisogna proprio specificare il colore 1 o 2
   * (solo nella stampa di un singolo quadrato)
   */

  draw_init();
  
  draw_chessboard(altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale);
  
  draw_end();
  
  return 0;
}
