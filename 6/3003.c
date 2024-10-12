#include <stdio.h>
#include <stdlib.h>
#define PIECE 6

int main() {
        char *a = (char *)malloc(PIECE*sizeof(char));
        a[0] = 1; a[1] = 1; a[2]= 2; a[3] = 2; a[4] = 2; a[5] = 8;
        char *b = (char *)malloc(PIECE*sizeof(char));
        for(int i = 0; i < PIECE; i++ ) {
                scanf("%hhd ", &b[i]);
                b[i] = a[i]-b[i];
        }
        for(int i = 0; i <PIECE; i++)
                printf("%d ", b[i]);
        return 0;
}
