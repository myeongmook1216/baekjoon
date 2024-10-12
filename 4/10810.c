#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,M,i,j,k;
        scanf("%d %d", &N, &M);
        int *a= (int *)calloc(N,sizeof(int));
        while(M-- >0) {
                scanf("%d %d %d",&i,&j,&k);
                for(i; i<=j; i++)
                        a[i-1] = k;
        }
        for(int aa=0; aa< N; aa++)
                printf("%d ",a[aa]);
        free(a); return 0;
}
