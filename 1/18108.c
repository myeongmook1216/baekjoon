#include <stdio.h>
#include <stdlib.h>

int main() {
        int *a = (int *)malloc(1*sizeof(int));
        scanf("%d",a);
        printf("%d", *a-543);
        free(a);
        return 0;
}
