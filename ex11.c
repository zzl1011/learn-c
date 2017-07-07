#include <stdio.h>

int totalScore(int score[]) {
  int i,sum;
  for (i = 0; i < 10; i++) {
    sum += score[i];
  }
  return sum;
}

int maxScore(int score[]) {
  int i, max = 0;
  for (i=0; i<10; i++) {
    if (score[i] > max) {
      max = score[i];
    }
  }
  return max;
}

int minScore(int score[]) {
  int i, min=score[0];
  for (i=0; i<10; i++) {
    if (score[i] < min) {
      min = score[i];
    }
  }
  return min;
}

float avgScore(int score[]) {
  int i;
  float sum;
  for (i=0; i<10; i++) {
    sum += score[i];
  }
  return sum/10;
}

void sortScore(int score[]) {
  int i, j, temp;
  for (i=0; i<10; i++) {
    for (j=0; j<i; j++) {
      if (score[j+1] > score[j]) {
        temp = score[j];
        score[j] = score[j+1];
        score[j+1] = temp;
      }
    }
  }
  for (i=0; i < 10; i++) {
    printf("%d ", score[i]);
  }
}

int main()
{
  int score[10]={67,98,75,63,82,79,81,91,66,84};
  printf("总分是%d\n", totalScore(score));
  printf("最高分是%d\n", maxScore(score));
  printf("最低分是%d\n", minScore(score));
  printf("平均分是%.2f\n", avgScore(score));
  sortScore(score);

  return 0;
}
