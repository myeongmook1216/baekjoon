#include <stdio.h>

int main() {
        int X,N,a,b;
        int aa=0;
        scanf("%d\n%d", &X,&N);
        while(N){
                N--;
                scanf("%d %d", &a,&b);
                aa += a*b;
        }
        if(aa == X) printf("Yes");
        else printf("No");
        return 0;
}
