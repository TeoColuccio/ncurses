/* C
   Mad editor */

/* Il programma legge un carattere da tastiera 
 * e lo stampa in una posizione casuale dello schermo con
 * un attributo casuale. Premere f2 per uscire */

#include "mad_editor.h"

int main() 
{
  mad_init();

  mad_stampa_intestazione();

  mad_stampa_carattere_ciclo();
 
  mad_end();

  return 0;
}
