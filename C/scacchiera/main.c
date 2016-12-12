/* quadrati.c */

/* disegno dei quadrati con le ncurses */

#include <stdlib.h>

#include "scacchiera.h"

int main()
{
  scacchiera_drow(66, 10, 2, 4, 4);
  scacchiera_init();

    
  refresh();
  getch();
  endwin();

  return 0;
  
}
