#include <stdio.h>
#include <stdlib.h>
#define STRLEN 101

int main() {
        char *a = (char *)malloc(STRLEN*sizeof(char));
        while(fgets(a,STRLEN,stdin) != NULL) {
                printf("%s",a);
        }
        free(a); return 0;
}
