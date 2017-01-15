# Il programma disegna quadrati colorati 
# mediante le librerie ncurses

import curses
import sys
from quadrati import *

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

num_colore = 0

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

init_color()
stampa_intestazione(stdscr)

color = stdscr.getch()

draw_square(stdscr, color)

stdscr.refresh()
stdscr.getch()

curses.endwin()
