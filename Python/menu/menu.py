import curses

def menu_intestazione(stdscr):
    stdscr.addstr(3, 4, "Esempio di menu", curses.A_BOLD)
    stdscr.addstr(5, 4, "1 - Opzione 1", curses.A_BOLD)
    stdscr.addstr(6, 4, "2 - Opzione 2", curses.A_BOLD)
    stdscr.addstr(7, 4, "3 - Esci", curses.A_BOLD)

def menu_scelta(stdscr, scelta):
    if scelta == ord('1'):
        stdscr.addstr(5, 4, "1 - Opzione 1", curses.A_STANDOUT)
        stdscr.addstr(6, 4, "2 - Opzione 2", curses.A_BOLD)
        stdscr.addstr(11, 4, "Hai scelto l'opzione 1", curses.A_BOLD)
    elif scelta == ord('2'):
        stdscr.addstr(5, 4, "1 - Opzione 1", curses.A_BOLD)
        stdscr.addstr(6, 4, "2 - Opzione 2", curses.A_STANDOUT)
        stdscr.addstr(11, 4, "Hai scelto l'opzione 2", curses.A_BOLD)
