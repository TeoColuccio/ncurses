/* chgat.c */

/* cambiare colore e attributi di caratteri gia' scritti */

#include <stdlib.h>
#include <ncurses.h>

int main()
{
  initscr();
  curs_set(0);

  if (!has_colors()) {
    endwin();
    printf("Il terminale non riesce a gestire i colori\n");
    exit(1);
  }
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLACK);

  /* stampa un paio di righe */
  mvaddstr(5, 5, "Hello, NCurses");
  mvaddstr(6, 5, "Queste stringhe sono quasi normali!");

  /* cambia il colore e imposta il grassetto per la parola "quasi"
   * della stringa precedente
   */
  mvchgat(6,  /* riga di indice 6 */
      26,     /* colonna di indice 26, dove inizia "quasi" */
      5,      /* 5 caratteri da modificare */
      A_BOLD, /* attributi */
      1,      /* indice coppia di colori, senza COLOR_PAIR !!! */
      NULL    /* sempre NULL */
  );

  mvprintw(15, 5, "Premi un tasto per uscire");
  mvchgat(15,   /* riga */
      5,        /* colonna */
      -1,       /* -1 indica fino alla fine della riga */
      A_UNDERLINE,
      0,        /* non cambiare il colore */
      NULL
  );

  refresh();

  getch();

  endwin();

  return 0;
}
