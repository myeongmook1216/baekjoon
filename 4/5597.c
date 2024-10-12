#include <stdlib.h>
#define STUDENT 30
#define SUBMIT 28

int main() {
        int count = SUBMIT;
        int *b = (int *)malloc(2*sizeof(int));
        int n;
        int k = 0;
        int *s = (int *)calloc(STUDENT,sizeof(int));
        while(count-->0) {
                scanf("%d", &n);
                s[n-1] = n;
        }
        for(int i = 0; i < STUDENT; i++){
                if(s[i]==0){
                        b[k] = i+1;
                        k++;
                }
        }
        printf("%d\n%d",b[0],b[1]);
        free(b); free(s); return 0;
}
