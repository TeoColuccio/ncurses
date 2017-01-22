import curses
from led import *

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

stato_red = 0
stato_green = 0
stato_blue = 0

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

led_init_colori()

led_intestazione(stdscr)

scelta = stdscr.getch()
while scelta != ord('e'):
    if scelta == ord('R'):
        stato_red = led_on_off_red(stdscr, stato_red)
    elif scelta == ord('G'):
        stato_green = led_on_off_green(stdscr, stato_green)
    elif scelta == ord('B'):
        stato_blue = led_on_off_blue(stdscr, stato_blue)

    scelta = stdscr.getch()



stdscr.refresh()

curses.endwin()
