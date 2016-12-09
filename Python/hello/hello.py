import curses

# una differenza rispetto al C,
# lo standard screen viene restituito
# da initscr()
stdscr = curses.initscr()

curses.curs_set(0)

# getmaxyx() ritorna una tupla con i due valori
(ROWS, COLS) = stdscr.getmaxyx()

# La versione Python semplifica
# le cose riguardo all'output.
# Esiste solo la funzione addstr()
stdscr.addstr(5, 5, "Hello World")

stdscr.addstr(7, 5, "Sto scrivendo in un terminale di dimensioni: ")
stdscr.addstr(9, 5, "Righe: " + str(ROWS) + "; Colonne: " + str(COLS))

stdscr.addstr(12, 5, "Premi un taso per terminare")

stdscr.refresh()
stdscr.getch()

curses.endwin()
