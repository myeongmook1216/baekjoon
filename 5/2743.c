#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 101

int main() {
        char *a = (char *)malloc(MAXLEN*sizeof(char));
        scanf("%s",a);
        printf("%ld", strlen(a));
        free(a); return 0;
}
