#include <stdio.h>
 
int main() {
    
    int size, product;
    float value, total;

    for(int i = 0; i < 2;i++){
    scanf("%d %d %f", &product, &size, &value);
      total += size * value;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}