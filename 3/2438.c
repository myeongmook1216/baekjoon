#include <stdio.h>

int main() {
        int n;
        int k = 1;
        scanf("%d",&n);

        while(n) {
                for(int i = 0; i < k; i++)
                        printf("*");
                printf("\n");
                k++; n--;
        }
        return 0;
}
