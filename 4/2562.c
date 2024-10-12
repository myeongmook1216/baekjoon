#include <stdio.h>
#include <stdlib.h>
#define NATURALNUMBER 9

int main() {
        int max, k;
        int *n = (int *)malloc(NATURALNUMBER*sizeof(int));
        for(int i = 0; i < NATURALNUMBER; i++) scanf("%d",&n[i]);
        max = n[0]; k = 1;
        for(int j = 1; j < NATURALNUMBER; j++) {
                if(n[j] > max) { max = n[j]; k = j + 1;}
        }
        printf("%d\n%d",max,k);
        free(n); return 0;
}

