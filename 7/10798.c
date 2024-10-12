#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 16
#define COLUMN 5

int main() {
        char **a = (char **)malloc(COLUMN*sizeof(char *));
        for(int i = 0; i < COLUMN; i++) {
                a[i] = (char *)malloc(MAXLEN*sizeof(char));
                scanf("%s",a[i]);
        }
        for(int i = 0; i < MAXLEN; i++) {
                for(int j = 0; j < COLUMN; j++) {
                        if(a[j][i] != '\0')
                                printf("%c",a[j][i]);
                }
        }
        for(int i =0; i < COLUMN; i++)
                free(a[i]);
        free(a); return 0;
}
