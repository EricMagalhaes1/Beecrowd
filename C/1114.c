#include <stdio.h>

int main (){

  int acerto = 0;
  int senha;


  while(acerto == 0){
    scanf("%d", &senha);

    if(senha == 2002){
      printf("Acesso Permitido\n");
      acerto = 1;
    }
    else{
      printf("Senha Invalida\n");
    }
  }

  return 0;
}