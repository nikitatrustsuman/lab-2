#include <stdio.h>
#include <math.h>
int main () {
  double x, z, sum1;

  printf("Введіть перше число: ");
  scanf("%lf", &z);
  printf("Введіть друге число: ");
  scanf("%lf", &x);
  
  sum1 = sqrt(log((1 - 2 * x) / (z + 3)));
  if ((1 - 2 * x) / (z + 3) > 0) {
      sum1 = sqrt(log((1 - 2 * x) / (z + 3)));
      printf("Результат: %f\n", sum1);
  } else {
      printf("Вираз має недопустиме значення.\n");
  }
 return 0;
}