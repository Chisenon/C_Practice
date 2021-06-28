#include <stdio.h>

int main(void)
{
  int i;
  int kaijou = 1;
  int number = 30;
  double napier = 1.0;

  for (i = 1; i < number; i++)
  {
    kaijou *= i;
    napier += 1.0 / kaijou;
  }

  printf("e = %f\n", napier);

  return 0;
}
