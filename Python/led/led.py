import curses

def led_init_colori():
    curses.init_pair(1, curses.COLOR_BLACK, curses.COLOR_WHITE)
    curses.init_pair(2, curses.COLOR_BLACK, curses.COLOR_RED)
    curses.init_pair(3, curses.COLOR_BLACK, curses.COLOR_GREEN)
    curses.init_pair(4, curses.COLOR_BLACK, curses.COLOR_BLUE)
    curses.init_pair(5, curses.COLOR_WHITE, curses.COLOR_RED)
    curses.init_pair(6, curses.COLOR_WHITE, curses.COLOR_GREEN)
    curses.init_pair(7, curses.COLOR_WHITE, curses.COLOR_BLUE)

def led_stampa_carattere(stdscr, ROW, COL):
    stdscr.addstr(ROW, COL, "|     |     |")

def led_intestazione(stdscr):
    i = 0
    row = 0
    stdscr.addstr(4, 7, "+-----+-----+-----+") 
    stdscr.addstr(5, 7, "|     |     |     GND")
    stdscr.addstr(6, 47, "Led: Simulatore di Led", curses.A_BOLD)
    stdscr.addstr(6, 7, " ", curses.color_pair(1))
    stdscr.addstr(6, 13, " ", curses.color_pair(1))
    stdscr.addstr(6, 19, " ", curses.color_pair(1))
    stdscr.addstr(7, 7, " ", curses.color_pair(1))
    stdscr.addstr(7, 13, " ", curses.color_pair(1))
    stdscr.addstr(7, 19, " ", curses.color_pair(1))
   
    row = 8
    while i < 2:
        led_stampa_carattere(stdscr, row, 7)
        i = i + 1
        row = row + 1
    stdscr.addstr(10, 7, "/     /     /")
    i = 0
    row = 11
    while i < 5:
        led_stampa_carattere(stdscr, row, 7)
        i = i + 1
        row = row + 1
    stdscr.addstr(16, 4, "+--+-----+-----+")
    stdscr.addstr(17, 3, "+5V")
    stdscr.addstr(8, 47, "R - led", curses.A_BOLD)
    stdscr.addstr(8, 56, "rosso", curses.color_pair(5))
    stdscr.addstr(9, 47, "G - led", curses.A_BOLD)
    stdscr.addstr(9, 56, "verde", curses.color_pair(6))
    stdscr.addstr(10, 47, "B - led", curses.A_BOLD)
    stdscr.addstr(10, 56, "blu", curses.color_pair(7))
    stdscr.addstr(12, 47, "e - Esci", curses.A_BOLD)

def led_on(stdscr, scelta):
    if scelta == ord('R'):
        stdscr.addstr(6, 7, " ", curses.color_pair(2))
        stdscr.addstr(7, 7, " ", curses.color_pair(2))
        stdscr.addstr(10, 7, "|")
    elif scelta == ord('G'):
        stdscr.addstr(6, 13, " ", curses.color_pair(3))
        stdscr.addstr(7, 13, " ", curses.color_pair(3))
        stdscr.addstr(10, 13, "|")
    elif scelta == ord('B'):
        stdscr.addstr(6, 19, " ", curses.color_pair(4))
        stdscr.addstr(7, 19, " ", curses.color_pair(4))
        stdscr.addstr(10, 19, "|")
