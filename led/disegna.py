import curses

def disegna_base(win):
    parte_superiore1 = '+-----+-----+-----+'
    parte_superiore2 = '|     |     |     GND'
    parte_centrale =   '|     |     |'
    parte_inferiore1 = '+--+-----+-----+'
    parte_inferiore2 = '+5V'

    win.addstr(2, 7, parte_superiore1)
    win.addstr(3, 7, parte_superiore2)
    for i in range(10):
        win.addstr(4+i, 7, parte_centrale)
    win.addstr(14, 4, parte_inferiore1)
    win.addstr(15, 3, parte_inferiore2)


def disegna_interruttori(win, ledRedState, ledGreenState, ledBlueState):
    if ledRedState == False:
        win.addstr(8, 7, '/')
    if ledGreenState == False:
        win.addstr(8, 13, '/')
    if ledBlueState == False:
        win.addstr(8, 19, '/')


def disegna_led(win, ledRedState, ledGreenState, ledBlueState):
    if ledRedState == False:
        win.addstr(4, 7, ' ', curses.color_pair(4))
        win.addstr(5, 7, ' ', curses.color_pair(4))
    else:
        win.addstr(4, 7, ' ', curses.color_pair(1))
        win.addstr(5, 7, ' ', curses.color_pair(1))

    if ledGreenState == False:
        win.addstr(4, 13, ' ', curses.color_pair(4))
        win.addstr(5, 13, ' ', curses.color_pair(4))
    else:
        win.addstr(4, 13, ' ', curses.color_pair(2))
        win.addstr(5, 13, ' ', curses.color_pair(2))

    if ledBlueState == False:
        win.addstr(4, 19, ' ', curses.color_pair(4))
        win.addstr(5, 19, ' ', curses.color_pair(4))
    else:
        win.addstr(4, 19, ' ', curses.color_pair(3))
        win.addstr(5, 19, ' ', curses.color_pair(3))
