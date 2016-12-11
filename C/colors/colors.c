/* colors.c */

/* cambiare il colore dei caratteri */

#include <stdlib.h>
#include <ncurses.h>

int main()
{
  initscr();
  curs_set(0);

  /* prima di utilizzare i colori bisogna chiedere al
   * terminale se e' in grado di gestirli attraverso
   * la funzione has_colors()
   */
  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
  /* se has_color() ritorna TRUE siamo qui
   * e possiamo inizializzare il sistema dei colori
   */
  start_color();

  /* per utilizzare i colori bisogna creare delle coppie
   * colore di sfondo - colore del testo
   * ed assegnare un numero identificativo alla coppia
   */

  /* crea la coppia ROSSO su GIALLO e le assegna il codice 1 */
  init_pair(1, COLOR_RED, COLOR_YELLOW);
  /* i colori predefiniti sono:
   * COLOR_BLACK
   * COLOR_RED
   * COLOR_GREEN
   * COLOR_YELLOW
   * COLOR_BLUE
   * COLOR_MAGENTA
   * COLOR_CYAN
   * COLOR_WHITE
   */

  /* a questo punto possiamo stampare a colori */
  attron(COLOR_PAIR(1));  /* usa la coppia di colori di codice 1 */
  mvaddstr(10, 20, "Hello, NCurses");
  attroff(COLOR_PAIR(1));

  mvprintw(15, 20, "Premi un tasto per uscire");

  refresh();

  getch();

  endwin();

  return 0;
}
