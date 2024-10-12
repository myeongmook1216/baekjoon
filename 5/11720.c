#include <stdio.h>

int main() {
        int N;
        int b = 0;
        int c;
        scanf("%d", &N);
        while(N-->0) {
                scanf("%1d",&c);
                b+=c;
        }
        printf("%d",b);
        return 0;
}
