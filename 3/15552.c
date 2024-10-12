#include <stdio.h>

int main() {
        int n, a,b;
        scanf("%d",&n);
        while(n) {
                n--;
                scanf("%d %d",&a,&b);
                printf("%d\n",a+b);
        }
        return 0;
}
