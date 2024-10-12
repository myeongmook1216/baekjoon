#include <stdio.h>

int main() {
        int H,M,A;
        scanf("%d %d\n%d",&H,&M,&A);

        if(M+A>59){
                if((H+=(M+A)/60) >23) H -= 24;
                M = (M+A)%60;
        }
        else M = M+A;

        printf("%d %d", H,M);
        return 0;
}
