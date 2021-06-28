#include <stdio.h>
#define N 15

int main(void)
{
  int seiseki[N] = {45, 74, 17, 59, 38, 22, 5, 65, 93, 99,100, 7,48,88,100};
  int i,count=0;

  for (i = 0 ; i <= 10 ; i++){
    if ( i == 10){
      printf(" %7d | ",i*10);
    }else{
      printf("%2d -- %2d | ",i*10, i*10+9);
    }
    for (int j = 0; j < N; j++){
      if(i == seiseki[j]/10){
        printf("%d",seiseki[j]%10);
      }
    }
    printf("\n");
  }
  return 0;
}