#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        char *a = (char *)malloc(50*sizeof(char));
        scanf("%s",a);
        printf("%s?\?!",a);
        free(a);
        return 0;
}
