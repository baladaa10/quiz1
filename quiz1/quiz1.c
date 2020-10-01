// Author: Balade Shala bks5681@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "quiz1.h"

int digit_sum_base(int n, int base) {
  int s = 0;
  while(n==0){
    s +=n%base;
}
return s;
}
