#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET 26
#define STRLEN 16

int main() {
        char *a = (char *)malloc(ALPHABET*sizeof(char));
        char *b = (char *)malloc(STRLEN*sizeof(char));
        int count = 0;
        int i = 0;
        for(i; i < 3; i++) a[i] = 3;
        for(i = 3; i < 6; i++) a[i] = 4;
        for(i = 6; i < 9; i++) a[i] = 5;
        for(i = 9; i < 12; i++) a[i] = 6;
        for(i = 12; i < 15; i++) a[i] = 7;
        for(i = 15; i < 19; i++) a[i] = 8;
        for(i = 19; i < 22; i++) a[i] = 9;
        for(i = 22; i < 26; i++) a[i] = 10;

        fgets(b,STRLEN,stdin);
        for(int i = 0; i <strlen(b); i++) {
                int k = b[i] - 'A';
                count += a[k];
        }
        printf("%d",count);

        free(a); free(b); return 0;
}
