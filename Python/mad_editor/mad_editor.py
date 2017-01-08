import random
import curses

def mad_init():
    stdscr = curses.initscr()
    curses.noecho()
    curses.curs_set(0)
    curses.keypad(stdscr, TRUE)

def mad_stampa_intestazione():
    stdscr.addstr(4, 4, "Questo e' un editor di testi matto\n    (Premi F2 per terminare)")

def mad_stampa_carattere(c):
    (rows, cols) = stdscr.getmaxyx()
    attr = random.random_between(0, 3)
  
    if attr == 0:
        stdscr.attron(A_UNDERLINE)
        stdscr.mvprintw(random.randrange(0, rows), random.randrange(0, cols), "%c", c)
        stdscr.attroff(A_UNDERLINE)
    elif attr ==  1:
        stdscr.attron(A_BOLD)
        stdscr.mvprintw(random_between(0, rows), random_between(0, cols), "%c", c)
        stdscr.attroff(A_BOLD)
    elif attr == 2:
        stdscr.attron(A_STANDOUT)
        stdscr.mvprintw(random_between(0, rows), random_between(0, cols), "%c", c)
        stdscr.attroff(A_STANDOUT)

def mad_stampa_carattere_ciclo():
    while (car == stdscr.getch()) != KEY_F(2):
        c = stdscr.getch()
        mad_stampa_carattere(c)
    
def mad_end():
    stdscr.refresh
    stdscr.getch()
    stdscr.endwin()
