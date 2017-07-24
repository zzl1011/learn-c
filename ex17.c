#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mystrcat(char *s, char *t) {
    while((*s++ = *t++) != '\0'){
      ;
    }
}

int main() {
  char *s1 = "Hello world!";
  char *s2 = "zzl1011";
  char *pTmp = NULL;

  pTmp = (char *)malloc(s1 + strlen(s2)-1);
  pTmp = s1;
  mystrcat(pTmp, s2);
  printf("%s", pTmp);
  free(pTmp);

  return 0;
}


