#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 1000

int main() {
        int n;
        scanf("%d", &n);
        char **c = (char **)malloc(n*sizeof(char *));
        for(int i = 0; i < n; i++) {
                c[i] = (char *)malloc(STRLEN *sizeof(char));
                scanf("%s",c[i]);
        }
        for(int i = 0; i < n; i++) {
                int k = strlen(c[i]);
                printf("%c%c\n",c[i][0], c[i][k-1]);
        }
        free(c); return 0;
}
