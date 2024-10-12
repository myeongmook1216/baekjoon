#include <stdio.h>

int main() {
        int n;
        char *a = "long ";
        scanf("%d",&n);
        n = n/4;
        while(n) {
                n--;
                printf("%s",a);
        }
        printf("int");
        return 0;
}
