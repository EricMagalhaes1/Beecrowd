#include <stdio.h>

int fatorial(int n){
  
  if(n <= 1){
    return 1;
  }
  else{
    return n * fatorial(n-1);
  }
}


int main (){

  int n;

  scanf("%d", &n);

  int resultado = fatorial(n);

  printf("%d\n", resultado);

  return 0;
}