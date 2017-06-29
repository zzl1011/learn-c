#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("华氏温度  摄氏温度\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0)*(fahr-32);
    printf("%3.0f %6.2f\n", fahr, celsius);
    fahr = fahr+ step;
  }
  return 0;
}
