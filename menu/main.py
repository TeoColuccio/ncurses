import sys
import curses

from menu import stampa_menu

stdscr = curses.initscr()
curses.curs_set(0)
curses.raw()
curses.noecho()

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

scelta = -1

stdscr.addstr(3, 5, "Esempio di menu")
stampa_menu(stdscr, 5, 5, scelta)

while scelta != '3':
    scelta = chr(stdscr.getch())
    stampa_menu(stdscr, 5, 5, scelta)

    if scelta == '1':
        stdscr.addstr(12, 5, "Hai scelto l'opzione 1")
    elif scelta == '2':
        stdscr.addstr(12, 5, "Hai scelto l'opzione 2")
    
    stdscr.refresh()

curses.endwin()
