#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ALPHABET 26
#define STRLEN 1000001

int main() {
        int *a = (int *)calloc(ALPHABET,sizeof(int));
        char *b = (char *)malloc(STRLEN*sizeof(char));
        scanf("%s",b);

        for(int i = 0; b[i]; i++) {
                char ch = toupper(b[i]);
                if( 'A' <= ch && ch <= 'Z') {
                        int k = ch - 'A';
                        a[k] += 1;
                }

        }

        char max = 0;
        int c = 0;
        for(int i =1 ; i <ALPHABET; i++) {
                if(a[i] > a[max]) {max = i; c= 0; }
                else if(a[i] == a[max]) c = 1;
        }
        if(c == 1) printf("?");
        else printf("%c", max + 'A');
        free(a); free(b); return 0;
}
