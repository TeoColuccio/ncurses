/* Mad editor */

/* Il programma legge un carattere da tastiera 
 * e lo stampa in una posizione casuale dello schermo con
 * un attributo casuale. Premere f2 per uscire */

#include "mad_editor.h"

int main() 
{
  int c, car, i = 0;

  mad_init();

  mad_stampa_intestazione();

//  while ((car = getch()) != KEY_F(2)) {
    while (i < 10) {
    c = getch();
    mad_stampa_carattere(c);
  }
  
  mad_end();

  return 0;
}
