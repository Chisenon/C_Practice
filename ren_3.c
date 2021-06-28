#include <stdio.h>
#define MAX 10

int main(void)
{
  int kyuyo[MAX] = {125814, 225547, 132254, 224321, 352124, 342214, 382154, 321014, 112254, 153789};
  int kinnsyu[MAX] = {10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 1};
  int maisuu[MAX] = {0};
  int b, sum = 0;

  for (int i = 0; i < MAX; i++)
  {
    sum += kyuyo[i];
    for (int j = 0; j < MAX; j++)
    {
      b = (kyuyo[i] / kinnsyu[j]);
      // printf("%d ",b);
      kyuyo[i] = kyuyo[i] - b * kinnsyu[j];
      maisuu[j] += b;
    }
  }

  for (int i = 0; i < MAX; i++)
  {
    printf("%5d 円 %5d 個\n", kinnsyu[i], maisuu[i]);
  }
  printf("合計金額 \t %d", sum);
  return 0;
}