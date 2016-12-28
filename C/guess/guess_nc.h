#ifndef GUESS_H
#define GUESS_H

/* guess: indovina il numero
 *
 * versione 1
 */

void guess_init();
int guess_number(int min, int max);
void guess_stampa_intestazione_nc();
char* guess_check_nc(int number, int guess);
void guess_end();

#endif
