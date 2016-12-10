/* attrs.c */

/* cambiare gli attributi dei caratteri */

#include <ncurses.h>

int main()
{
  initscr();
  curs_set(0);

  /* per attivare uno o piu' attributi si utilizza attron().
   */
  attron(A_UNDERLINE);  /* attiva sottolineato */
  mvaddstr(10, 20, "Hello, Ncurses");
  /* un attributo va disattivato quando non serve piu' */
  attroff(A_UNDERLINE);

  /* grassetto */
  attron(A_BOLD);
  mvaddstr(15, 20, "Premi un tasto per uscire");
  attroff(A_BOLD);

  /* in evidenza al meglio che puo' fare il terminale in uso
   */
  attron(A_STANDOUT);
  mvprintw(20, 20, "In evidenza!!!");
  attroff(A_STANDOUT);

  refresh();

  getch();

  endwin();

  return 0;
}
