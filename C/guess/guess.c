#include <stdio.h>
#include "guess.h"
#include "random.h"

void guess_init()
{
  random_init();
}

int guess_number(int min, int max)
{
  return random_between(min, max+1);
}

void guess_stampa_intestazione()
{
  printf("\n\nI have a number between 1 and 1000.\n"
      "Can you guess my number?\n"
      "Please type the first guess.\n");
}

int guess_check(int number, int guess)
{
  if (number==guess) {
    printf("Excellent! You guess the number!\n"
        "Would you like to play again (y or n)? ");
  } else if (number<guess) {
    printf("Too high. Try again.\n");
  } else {
    printf("Too low. Try again.\n");
  }
  
  return guess-number;
}
