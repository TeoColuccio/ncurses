#ifndef GUESS_H
#define GUESS_H

/* guess: indovina il numero */

void guess_init();
int guess_number(int min, int max);
char* guess_stampa_intestazione();
char* guess_check(int number, int guess);

#endif
