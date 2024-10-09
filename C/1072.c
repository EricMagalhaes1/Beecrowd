#include <stdio.h>

int main(){

  int n;
  int a;
  int in = 0;

  scanf("%d", &n);
  for(int i = 0; i < n;i++){
      scanf("%d", &a);
      if(a >= 10 && a <=20){
        in++;
      }
  }

  printf("%d in\n", in);
  printf("%d out\n", n - in);

  return 0;
}