#include <stdio.h>


int main (){
    float salario;
    float taxa = 0;

    scanf("%f", &salario);


    if (salario > 2000.00 && salario <=3000.00){
      taxa += ((salario - 2000)/100) * 8;
    }
    else if (salario > 3000.00 && salario <=4500.00){
      taxa += ((salario - 3000)/100) * 18 + 80;
    }
    else if (salario > 4500.00){
      taxa += ((salario - 4500)/100) * 28 + 350;
    }
    if(taxa > 0){
    printf("R$ %.2f\n", taxa);
    }
    else{
      printf("Isento\n");
    }
    return 0;
}