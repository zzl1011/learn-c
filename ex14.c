#include <stdio.h>

void scpy(char *s,  char *t) {
    int i=0;

    while((s[i] = t[i]) != '\0') {
      i++;
    }
}

int main() {
  char *s;

  scpy(s, "Hello world!");
  printf("%s\n", s);

  return 0;
}
