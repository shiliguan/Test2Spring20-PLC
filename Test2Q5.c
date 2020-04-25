/*PLC Test2 Spring 2020 - Shili Guan M&W 5:30PM
determine the values of sum1 and sum2. Explain the results. Also, 
explain the results if there were no precedence rules.
*/
#include <stdio.h>
int fun(int *k) { 
    *k += 4; 
    return 3*(*k) - 1; 
}
int main() { 
  int i = 10, j = 10, sum1, sum2; 
  sum1 = (i/2) + fun(&i); 
  sum2 = fun(&j) + (j / 2); 
  
  printf("sum1 = %d\n",sum1);
  printf("sum2 = %d\n",sum2);
}
