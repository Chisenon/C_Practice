#include <stdio.h>
#define MAX 10

int main(void){
  int data[MAX] = {11,15,17,22,31,33,39,41,48,51};
  int key;
  printf("検索するデータを入力してね！=>");
  scanf("%d",&key);

  // printf("検索するよ\n");
  for (int i = 0 ; i <= MAX ; i++){
    if (key == data[i]){
      // printf("ヒット\n");
      printf("検索したデータは%d番目だね！",i);
      break ;
    } else if (i == MAX ){
      printf("該当するデータはないみたい...\n");
    }
  }
  return 0;
}