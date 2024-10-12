#include <stdio.h>
#include <stdlib.h>

int main() {
        int N,M,i,j;
        scanf("%d %d", &N,&M);
        int *s = (int *)malloc(N*sizeof(int));
        int *s2 = (int *)malloc(N*sizeof(int));

        for(int l = 0; l < N; l++) s[l] = l+1;
        while(M-->0) {
                scanf("%d %d", &i,&j);
                i -= 1; j-=1;
                int k = i;
                int k2 = j;
                for(j; j>=i;j--) {
                        s2[k]=s[j];
                        k++;}
                for(i; i<=k2; i++) {
                        s[i] = s2[i];
                }
        }
        for(int l1 = 0; l1 < N; l1++) printf("%d ", s[l1]);
        free(s); free(s2); return 0;
}
