#include <stdio.h>

int main(){
  
  double a,b,c;
  double pi = 3.14159;

  scanf("%lf %lf %lf",&a, &b, &c);

  printf("TRIANGULO: %.3lf\n", (a * c)* 0.5);
  printf("CIRCULO: %.3lf\n", (c * c) * pi);
  printf("TRAPEZIO: %.3lf\n", 0.5 * (c *(a + b)));
  printf("QUADRADO: %.3lf\n", b * b);
  printf("RETANGULO: %.3lf\n", a * b);

  return 0;
}