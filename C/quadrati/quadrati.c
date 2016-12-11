/* quadrati.c */

/* disegno dei quadrati con le ncurses */

#include <stdlib.h>
#include <ncurses.h>

int main()
{
  int i = 0, r = 4, c = 5;

  initscr();
  curs_set(0);

  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
  
  start_color();

  init_pair(1, COLOR_BLACK, COLOR_WHITE);
  init_pair(2, COLOR_BLACK, COLOR_GREEN);
  
  attron(COLOR_PAIR(1));  
  while(i < 12) {
    mvaddstr(r, 5, "             ");
    r++;
    i++;
  }
  attroff(COLOR_PAIR(1));

  attron(COLOR_PAIR(2));
  i = 0;
  r = 8;
  while(i < 10) {
    mvaddstr(r, 25, "             "); 
    r++;
    i++;
  }
  attroff(COLOR_PAIR(2));
  
  refresh();
  getch();
  endwin();

  return 0;
}
