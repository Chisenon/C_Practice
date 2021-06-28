#include <stdio.h>
#define MAX 10

int main(void){
  int a =  0, b =  0, c=  0;
  int data[MAX] = {2,-8,5,-4,6,5,7,-3,-9,1};
  
  for (int i = 0 ; i < MAX ; i++){
    if (data[i] % 2 == 0){
      a++;
    } else {
      b++;
    }
    if (data[i] < 0 ){
      c++;
    } 
  }

  printf("Šï” = %d \n‹ô” = %d \n•‰‚Ì” = %d ",b,a,c );
  return 0;
}