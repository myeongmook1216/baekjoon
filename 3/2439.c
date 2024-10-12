#include <stdio.h>

int main() {
        int n;
        int k = 0;
        scanf("%d",&n);

        while(n) {
                n--; k++;
                for(int i = 0; i < n; i++)
                        printf(" ");
                for(int j = 0; j < k; j++)
                        printf("*");

                printf("\n");
        }
        return 0;
}
