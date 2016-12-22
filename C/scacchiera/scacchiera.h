#ifndef SCACCHIERA_H
#define SCACCHIERA_H

void draw_init();
void draw_square(int colore, int altezza, int larghezza, int colonna_iniziale, int riga_iniziale);
void draw_four_square(int altezza_quadrato, int larghezza_quadrato, int colonna_iniziale, int riga_iniziale);
void draw_chessboard(int altezza_quadrato, int larghezza_quadrato, int colonna_iniziale, int riga_iniziale);
void draw_end();

#endif
