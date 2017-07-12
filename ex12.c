#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]);

int main() {
  char s[] = "student";
  printf("%d", strindex(s,"t"));
  return 0;
}

int strindex(char s[], char t[]) {
  int i,pos;
  for (i=0; i<strlen(s); i++) {
    if (s[i] == t[0]) {
      pos = i;
    }
  }

  return pos;
}
