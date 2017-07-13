#include <stdio.h>

void scpy(char *s, char *t) {
    while((*s = *t) != '\0') {
        s++;
        t++;
    }
}

int main() {
    char *s;

    scpy(s, "Hello world!");
    printf("%s", s);

    return 0;
}
