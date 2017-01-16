# Il programma propone un esempio di menu 

import curses 
from menu import *

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

menu_intestazione(stdscr)

stdscr.refresh()
stdscr.getch()

curses.endwin()

