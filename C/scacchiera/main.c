/* scacchiera.c */

/* disegno di una scacchiera con le ncurses */

#include <stdlib.h>

#include "scacchiera.h"

int main()
{
  int riga_iniziale = 2, colonna_iniziale = 9, altezza_quadrato = 4, larghezza_quadrato = 4;

  /* Nella funzione ho dichiarato le coppie di colore:
   * - 1 = COLOR_BLACK, COLOR_WHITE
   * - 2 = COLOR_BLACK, COLOR_RED
   * infatti nel primo parametro bisogna proprio specificare il colore
   * 1 o 2 
   */

  draw_init();

  draw_square(1, altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale);
  draw_square(1, altezza_quadrato, larghezza_quadrato, colonna_iniziale + altezza_quadrato, riga_iniziale + larghezza_quadrato);
draw_square(2, altezza_quadrato, larghezza_quadrato, colonna_iniziale
    + larghezza_quadrato, riga_iniziale);
draw_square(2, altezza_quadrato, larghezza_quadrato, colonna_iniziale, riga_iniziale + altezza_quadrato);
  
draw_end();
  
  return 0;
}
