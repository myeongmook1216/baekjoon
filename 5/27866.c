#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 1001

int main() {
        int n;
        char *a = (char *)malloc(MAXLEN*sizeof(char));
        scanf("%s",a);
        scanf("%d",&n);
        printf("%c", a[n-1]);
        free(a);
        return 0;
}
