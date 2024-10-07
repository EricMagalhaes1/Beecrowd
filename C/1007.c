#include <stdio.h>
 
int main() {
    
    int a,b,c,d;
    
    scanf("%d %d %d %d",&a,&b,&c, &d);
    
    
    int produto = (a*b)-(c*d);
    
    printf("DIFERENCA = %d\n", produto);
 
    return 0;
}