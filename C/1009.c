#include <stdio.h>
 
int main() {
    
    char name[100];
    double salary, sales;
 
    scanf("%s %lf %lf", name, &salary, &sales);
    
   double bonus = sales * 0.15;
   
   salary += bonus;
    
    printf("TOTAL = R$ %.2f\n", salary);
 
    return 0;
}