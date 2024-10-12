#include <stdlib.h>

int main() {
        int N;
        char a = '*';
        scanf("%d", &N);
        int j = 0;
        while(N-->0){ j++;
                for(int i = 0; i < N; i++)
                        printf(" ");

                for(int i = 0; i < 2*j-1; i++)
                        printf("%c",a);
                printf("\n");
        }
        N++;
        while(j-->0) { N++;
                for(int i = 0; i < N; i++)
                        printf(" ");
                for(int i = 0; i < 2*j-1; i++)
                        printf("%c",a);
                printf("\n");
        }

        return 0;
}
