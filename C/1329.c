#include <stdio.h>

int main(){

  int times = 1;
  int p;

  while(times != 0){
    int m = 0, j = 0;
    scanf("%d", &times);
    for(int i = 0; i < times; i++){
      scanf(" %d", &p);
      if(p == 0){
        m++;
      }
      else if(p == 1){
        j++;
      }
    }
    
  if (times != 0){
    printf("Mary won %d times and John won %d times\n", m,j);
    }
  };

return 0;
}