#include <stdio.h>
#include <stdlib.h>
#define LEN 9

int main() {
        int **a = (int **)malloc(LEN*sizeof(int *));
        for(int i = 0; i < LEN ; i++) {
                a[i] = (int *)malloc(LEN*sizeof(int));
                for(int j = 0; j < LEN ; j++) {
                        scanf("%d", &a[i][j]);
                }
        }
        int row = 0, column = 0, max = -1;
        for(int i =0; i < LEN; i++ ){
                for(int j = 0; j <LEN; j++) {
                        if(a[i][j] > max) {
                                max = a[i][j]; row = i+1; column = j+1;
                        }
                }
        }
        printf("%d\n%d %d", max,row,column);
        for(int i = 0; i < LEN; i++)
                free(a[i]);
        free(a); return 0;
}
