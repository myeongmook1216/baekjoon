#include <stdio.h>
#include <stdlib.h>

int main() {
        int a, b;
        while(1) {
                if(scanf("%d %d", &a, &b) == EOF) exit(0);
                else printf("%d\n", a+b);
                }
        return 0;
}
