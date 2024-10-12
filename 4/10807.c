#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,v;
        int a = 0;
        scanf("%d", &N);
        int *b = (int *)malloc(N*sizeof(int));

        for(int i = 0; i < N; i++) scanf("%d ",&b[i]);
        scanf("%d", &v);
        for(int j = 0; j < N; j++) {
                if(b[j] == v) a++;
        }
        printf("%d", a);
        free(b);
        return 0;
}
