#include <stdio.h>
 
int main() {
    
    int employee, hours;
    float rate;
    
    scanf("%d %d %f", &employee, &hours, &rate);
    
   float salary = hours * rate;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employee, salary);
 
    return 0;
}