// Author: Balade Shala bks5681@psu.edu
#include "quiz1.h"

int digit_sum_base(int n, int base) {
int s = 0;
while(n>0){
  s +=n%base;
}
return s;
}
int main(){
int n, base;
printf("Enter an int: ");
scanf("%d",&n);
printf("Enter a base: ");
scanf("%d",&base);
printf("Answer is %d.\n", digit_sum_base(n,base));
}
