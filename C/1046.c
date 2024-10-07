#include <stdio.h>

int main (){

  int a , b;

  int total;
  scanf("%d %d", &a, &b);

  if( a > b){
    total = (24 + b) - a;
  }
  else if ( a < b){
    total = b - a;
  }
  else{
    total = 24;
  }
  

  printf("O JOGO DUROU %d HORA(S)\n", total);
}