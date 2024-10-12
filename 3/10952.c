#include <stdio.h>
#include <stdlib.h>

int main() {
        int a, b;
        while(1) {
                scanf("%d %d", &a, &b);
                if(a==0 && b==0) exit(0);
                printf("%d\n", a+b);
                }
        return 0;
}

