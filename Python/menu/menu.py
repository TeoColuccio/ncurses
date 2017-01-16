import curses

def menu_intestazione(stdscr):
    stdscr.addstr(3, 4, "Esempio di menu", curses.A_BOLD)
    stdscr.addstr(5, 4, "1 - Opzione 1", curses.A_BOLD)
    stdscr.addstr(6, 4, "2 - Opzione 2", curses.A_BOLD)
    stdscr.addstr(7, 4, "3 - Esci", curses.A_BOLD)

