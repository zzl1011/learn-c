#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void scpy(char *s, char *t) {
    while((*s++ = *t++) != '\0') {
      ;
    }
}

int main() {
    char *s1 = "Hello world!";
    char *s2 = NULL;

    s2 = (char *)malloc(strlen(s1)+1);
    scpy(s2, s1);
    printf("%s", s2);
    free(s2);

    return 0;
}
