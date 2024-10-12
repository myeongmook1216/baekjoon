#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 100
#define ALPHABET 26

int main() {
        char *a = (char *)malloc(ALPHABET*sizeof(char));
        memset(a,-1,ALPHABET*sizeof(char));
        char *b = (char *)malloc(STRLEN*sizeof(char));
        scanf("%s", b);
        for(int i = 0; i < strlen(b); i++) {
                int k = b[i] - 'a';
                if(a[k] == -1)
                        a[k] = i;
        }
        for(int i = 0; i < ALPHABET; i++) printf("%d ",a[i]);
        free(a); free(b); return 0;
}
