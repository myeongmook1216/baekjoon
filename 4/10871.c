#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,X;
        int k = 0;
        scanf("%d %d",&N, &X);
        int *a = (int *)malloc(N*sizeof(int));
        int *b = (int *)malloc(N*sizeof(int));

        for(int i = 0; i < N; i++) scanf("%d ", &a[i]);
        for(int j = 0; j < N; j++) {
                if(a[j] < X) {
                        b[k] = a[j];
                        k++;
                }
        }
        for(int l = 0; l < k; l++)
                printf("%d ", b[l]);
        free(a); free(b);
        return 0;
}
