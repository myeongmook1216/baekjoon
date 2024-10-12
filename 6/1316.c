#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 101
#define ALPHABET 26

int main() {
        char *a = (char *)calloc(ALPHABET,sizeof(char));
        int N;
        int count = 0;
        int rcount = 0;
        scanf("%d", &N);
        char **b = (char **)malloc(N*sizeof(char *));
        for(int i = 0; i < N; i++) {
                b[i] = (char *)malloc(STRLEN*sizeof(char));
                count = 1;
                scanf("%s", b[i]);
                        for(int j = 0; j < strlen(b[i]); j++) {
                                int k = b[i][j] - 'a';
                                if(a[k] == 1 && (b[i][j-1] != b[i][j])) {
                                        count = 0;
                                        break;
                                }
                                a[k] = 1;
                        }
                        rcount += count;
                        memset(a,0,ALPHABET*sizeof(char));
        }
        printf("%d",rcount);
        for(int i = 0 ; i < N; i++)
                free(b[i]);
        free(b); free(a); return 0;
}
