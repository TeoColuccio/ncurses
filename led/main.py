import curses
import sys

from disegna import *

def switch_state(ledRedState, ledGreenState, ledBlueState, scelta):
    if scelta == ord('r'):
        ledRedState = not ledRedState
    elif scelta == ord('g'):
        ledGreenState = not ledGreenState
    elif scelta == ord('b'):
        ledBlueState = not ledBlueState

    return (ledRedState, ledGreenState, ledBlueState)


stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()

if not curses.has_colors():
    curses.endwin()
    print "Il tuo terminale non supporta i colori. Bye"
    sys.exit()
curses.start_color()

ledRedState = True
ledGreenState = True
ledBlueState = True

scelta = -1

curses.init_pair(1, curses.COLOR_WHITE, curses.COLOR_RED)
curses.init_pair(2, curses.COLOR_WHITE, curses.COLOR_GREEN)
curses.init_pair(3, curses.COLOR_WHITE, curses.COLOR_BLUE)
curses.init_pair(4, curses.COLOR_WHITE, curses.COLOR_WHITE)

stdscr.addstr(3, 45, "Led: Simulatore di Led")
stdscr.addstr(5, 45, "R - led rosso")
stdscr.chgat(5, 53, 5, curses.color_pair(1))
stdscr.addstr(6, 45, "G - led verde")
stdscr.chgat(6, 53, 5, curses.color_pair(2))
stdscr.addstr(7, 45, "B - led blu")
stdscr.chgat(7, 53, 3, curses.color_pair(3))
stdscr.addstr(9, 45, "e - Esci")

while scelta != ord('e'):
    disegna_base(stdscr)
    disegna_interruttori(stdscr, ledRedState, ledGreenState, ledBlueState)
    disegna_led(stdscr, ledRedState, ledGreenState, ledBlueState)
    scelta = stdscr.getch()
    (ledRedState, ledGreenState, ledBlueState) = switch_state(ledRedState, ledGreenState, ledBlueState, scelta)

curses.endwin()
