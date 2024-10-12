#include <stdio.h>
#include <stdlib.h>
#define NUMLEN 3

void NumChange (char *a);

int main() {
        char *a = (char *)malloc(NUMLEN*sizeof(char));
        char *b = (char *)malloc(NUMLEN*sizeof(char));
        int c;

        scanf("%s %s", a, b);
        NumChange(a); NumChange(b);
        c = atoi(a) > atoi(b) ? atoi(a) : atoi(b);
        printf("%d", c);
        free(a); free(b); return 0;
}


void NumChange(char *a) {
        char a1;
        a1 = a[0];
        a[0] = a[2];
        a[2] = a1;
}
