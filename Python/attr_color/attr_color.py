# attr_color.py

# cambiare attributi e colori

import curses
import sys

stdscr = curses.initscr()
curses.curs_set(0)

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

curses.init_pair(1, curses.COLOR_RED, curses.COLOR_WHITE)
stdscr.addstr(5, 5, "Hello World", curses.color_pair(1))

stdscr.addstr(12, 5, "Premi un taso per terminare", curses.A_UNDERLINE | curses.color_pair(1))

stdscr.refresh()
stdscr.getch()

curses.endwin()
