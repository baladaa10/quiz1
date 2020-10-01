// Author: Balade Shala bks5681@psu.edu
#include <stdio.h>
#include "quiz1.h"

int main(){
int n, base;
printf("Enter an int: ");
scanf("%d",&n);
printf("Enter a base: ");
scanf("%d",&base);
printf("Answer is %d.\n", digit_sum_base(n,base));
}
