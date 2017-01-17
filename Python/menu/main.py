# Il programma propone un esempio di menu 

import curses 
from menu import *

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

menu_intestazione(stdscr)

scelta = stdscr.getch()
while scelta != ord('3'):
    menu_scelta(stdscr, scelta)
    scelta = stdscr.getch()

stdscr.refresh()

curses.endwin()

