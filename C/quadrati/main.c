/* quadrati.c */

/* disegno dei quadrati con le ncurses */

#include <stdlib.h>

#include "quadrati.h"

int main()
{
  int r = 4, c = 5;

  /* Nella funzione ho dichiarato le coppie di colore:
   * - 1 = COLOR_BLACK, COLOR_WHITE
   * - 2 = COLOR_BLACK, COLOR_GREEN
   * infatti nel primo parametro bisogna proprio specificare il colore
   * 1 o 2 
   */
  
  drow_init();
  
  drow_square(1, 12, 13, c, r);
  drow_square(2, 12, 13, c + 25, r + 5);

  drow_end(); 
  
  return 0;
}
