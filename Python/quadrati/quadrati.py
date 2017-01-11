import curses

def init_color():
    curses.init_pair(1, curses.COLOR_BLACK, curses.COLOR_WHITE)
    curses.init_pair(2, curses.COLOR_BLACK, curses.COLOR_GREEN)
    curses.init_pair(3, curses.COLOR_BLACK, curses.COLOR_BLUE)

def stampa_intestazione(stdscr):
    stdscr.addstr(3, 3, "Disegna Quadrati")
    stdscr.addstr(5, 3, "Scegli quale quadrato vuoi disegnare")
    stdscr.addstr(7, 3, "a - quadrato verde")
    stdscr.addstr(8, 3, "b - quadrato blu")
    stdscr.addstr(9, 3, "e - termina il programma")

def draw_square(stdscr, color):
    num_colore = 0
    i = 0 
    conta = 0 
    colonna_iniziale = 13 
    riga_iniziale = 3 
    altezza = 9
    larghezza = 11
    temp = colonna_iniziale
     
    if color == 'a':
        num_colore = 1
    elif color == 'b':
        num_colore = 2

    while i < larghezza:
        conta = 0
        colonna_iniziale = temp 
        while conta < altezza:
            stdscr.addstr(colonna_iniziale, riga_iniziale, " ", curses.color_pair(num_colore))
            colonna_iniziale = colonna_iniziale + 1
            conta = conta + 1
        riga_iniziale = riga_iniziale + 1
        i = i + 1
