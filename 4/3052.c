#include <stdio.h>
#include <stdlib.h>
#define REMAINDER 42
#define INPUT 10

int main(){
        int count = INPUT;
        int a,j;
        int k = 0;
        int *s = (int *)calloc(REMAINDER,sizeof(int));
        while(count-->0) {
                scanf("%d", &a);
                j = a%42;
                s[j] = 1;
        }
        for(int i = 0; i < REMAINDER; i++) {
                if(s[i] == 1) k++;
        }
        printf("%d", k);
        free(s); return 0;
}
