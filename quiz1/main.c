// Author: Balade Shala bks5681@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "quiz1.h"
int main(void) {
  int num = atoi(readline("Enter an integer: "));
  printf("sum is %d.\n", sum_n(num));
  char *line = readline("Enter a base: ");
  printf("answer is %d.\n", digit_sum_base(n,base));
}
