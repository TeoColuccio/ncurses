import curses
from led import *

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

led_init_colori()
led_intestazione(stdscr)

stdscr.refresh()
stdscr.getch()

curses.endwin()
