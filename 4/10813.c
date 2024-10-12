#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,M,i,j,t;
        scanf("%d %d",&N,&M);
        int *b = (int *)malloc(N*sizeof(int));
        for(int ai=0; ai<N; ai++) b[ai] = ai+1;

        while(M-->0){
                scanf("%d %d",&i,&j);
                t = b[i-1];
                b[i-1] = b[j-1];
                b[j-1] = t;
        }
        for(int i2 = 0; i2 < N; i2++) printf("%d ", b[i2]);
        free(b); return 0;
}
