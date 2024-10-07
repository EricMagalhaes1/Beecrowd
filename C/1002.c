#include <stdio.h>


int main(){

  double pi = 3.14159;
  double a = 0;  

  scanf("%lf", &a);

  double area = pi * (a*a);

  printf("A=%.4lf\n", area);

  return 0;
}