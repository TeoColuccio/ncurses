# Python  
#   Mad editor 

# Il programma legge un carattere da tastiera 
# e lo stampa in una posizione casuale dello schermo con
# un attributo casuale. Premere f2 per uscire 

from mad_editor import *
  
stdscr = mad_init()

mad_stampa_intestazione(stdscr)

mad_stampa_carattere_ciclo(stdscr)
 
mad_end(stdscr)
