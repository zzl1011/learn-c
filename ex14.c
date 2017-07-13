#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void scpy(char *s,  char *t) {
    int i=0;

    while((s[i] = t[i]) != '\0') {
      i++;
    }
}

int main() {
  char *s1 = "Hello world!";
  char *s2 = NULL;

  s2 = (char *)malloc(strlen(s1)+1);
  scpy(s2, s1);
  printf("%s\n", s2);
  free(s2);

  return 0;
}
