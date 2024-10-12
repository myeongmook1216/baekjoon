#include <stdio.h>
#include <stdlib.h>

int main() {
        int *A = (int *)malloc(sizeof(int));
        int *B = (int *)malloc(sizeof(int));
        int *C = (int *)malloc(sizeof(int));
        scanf("%d %d %d", A,B,C);
        printf("%d\n",(*A+*B)%*C);
        printf("%d\n",((*A%*C)+(*B%*C))%*C);
        printf("%d\n",(*A*(*B))%*C);
        printf("%d\n",((*A%*C)*(*B%*C))%*C);
        free(A); free(B); free(C);
        return 0;
}
