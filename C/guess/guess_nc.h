/* questo e' il modulo GUESS_NC, i nomi sono tutti sbagliati */

#ifndef GUESS_H /* a cominciare da questo */
#define GUESS_H

/* guess: indovina il numero */

void guess_init();

/* qusta non serve */
int guess_number(int min, int max);

void guess_stampa_intestazione_nc();
char* guess_check_nc(int number, int guess);
void guess_end();

#endif
