#include <stdio.h>

int main() {
        int n,k;
        scanf("%d", &n);
        k = n;
        while(k) {
                k--;
                n+=k;
                }
        printf("%d", n);
        return 0;
}
