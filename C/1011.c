#include <stdio.h>
 
int main() {
 
  double a;
  double pi = 3.14159;
    
  scanf("%lf", &a);
    
  double result = (4.0/3)*pi * (a*a*a);
 
  printf("VOLUME = %.3lf\n", result);

  return 0;
}