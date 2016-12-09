/* dim_finestra.c */

/* ottenere le dimensioni della finestra */

#include <ncurses.h>

int main()
{
  int ROWS, COLS;

  initscr();
  curs_set(0);

  /* getmaxyx() permette di ottenere il numero di righe
   * e il numero di colonne del terminale in uso.
   *
   * Le librerie ncurses creano automaticamente
   * uno schermo virtuale chiamato stdscr (standard screen).
   *
   * getmaxyx() chiede a stdscr che dimensioni ha
   */
  getmaxyx(stdscr, ROWS, COLS);

  mvprintw(5, 5, "Numero di righe: %d", ROWS);
  mvprintw(7, 5, "Numero di colonne: %d", COLS);

  refresh();

  getch();

  endwin();

  return 0;
}
