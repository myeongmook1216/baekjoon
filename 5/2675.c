#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 20

int main() {
        int T,j;
        scanf("%d", &T);
        char **a = (char **)malloc(T*sizeof(char *));
        int *R = (int *)malloc(T*sizeof(int));

        for(int i = 0; i< T; i++) {
                a[i] = (char *)malloc(STRLEN*sizeof(char));
                scanf("%d %s",&R[i], a[i]);
        }
        for(int i = 0; i < T; i++) {
                j = 0;
                for(j; j<strlen(a[i]); j++) {
                        for(int k = 0; k < R[i]; k++) {
                        printf("%c", a[i][j]); }
                }
                printf("\n");

        }
        for(int i = 0; i < T; i++) free(a[i]);
        free(a); return 0;
}
