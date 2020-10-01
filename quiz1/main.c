// Author: Balade Shala bks5681@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "quiz1.h"

int void(){
  char * n = readline("Enter an integer: ");
  char * base = readline("Enter a base: ");
  int number = atoi(n);
  int basenumber = atoi(base);
  printf("answer is %d.\n", digit_sum_base(number, basenumber));
}

