#include <stdio.h>
#include <stdlib.h>
#define BIGSQUARE 100

int main() {
        char **a = (char **)calloc(BIGSQUARE,sizeof(char *));
        for(int i = 0; i < BIGSQUARE; i++)
                a[i] = (char *)calloc(BIGSQUARE,sizeof(char));
        int n, a1, a2;
        scanf("%d", &n);
        int count = 0;
        while(n-->0) {
                scanf("%d%d", &a1, &a2);
                int b1 = a1 + 10;
                a2 = 100 - a2;
                int b2 = a2 - 10;
                for(int i =a1; i < b1; i++){
                        for(int j = b2; j < a2; j++){
                                a[j][i] = 1;
                        }
                }
        }
        for(int i = 0; i < BIGSQUARE; i++) {
                for(int j = 0; j < BIGSQUARE; j++){
                        if(a[i][j] == 1) count += 1;
                }
        }
        printf("%d", count);
        for(int i = 0; i < BIGSQUARE; i++) free(a[i]);
        free(a); return 0;
}
