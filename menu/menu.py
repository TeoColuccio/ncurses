import curses

def stampa_menu(win, row, col, scelta):
    entries = ('Opzione 1', 'Opzione 2', 'Esci')

    win.addstr(row, col, "Scegli:")

    for (r, entry) in enumerate(entries):
        if str(r+1) == scelta:
            attrs = curses.A_STANDOUT
        else:
            attrs = 0
        win.addstr(row+r, col, str(r+1) + " - " + entry, attrs)
