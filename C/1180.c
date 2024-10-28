#include <stdio.h>


int main(){
  int n;

  scanf("%d", &n);

  int array[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }

  int menor = array[0];
  int posicao = 0;

  for(int i = 1; i < n; i++){
    if(array[i] < menor){
      menor = array[i];
      posicao = i;
    }
  }

  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);

  return 0;
}