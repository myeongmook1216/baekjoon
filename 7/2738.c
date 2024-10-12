#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,M;
        scanf("%d %d",&N,&M);
        int **a = (int **)malloc(N*sizeof(int *));
        for(int i = 0 ; i < N; i++) {
                a[i] = (int *)malloc(M*sizeof(int *));
                for(int j = 0; j < M; j++) {
                        scanf("%d ",&a[i][j]);
                }
        }
        int **b = (int **)malloc(N*sizeof(int *));
        for(int i = 0; i < N; i++) {
                b[i] = (int *)malloc(M*sizeof(int *));
                for(int j = 0; j < M; j++) {
                        scanf("%d ",&b[i][j]);
                }
        }

        for(int i = 0; i < N; i++) {
                for(int j = 0; j < M; j++) {
                        printf("%d ",a[i][j] + b[i][j]);
                }
                printf("\n");
        }
        for(int i = 0 ; i < N; i++) {
                free(a[i]); free(b[i]);
        }
        free(a); free(b); return 0;
}

