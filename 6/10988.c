#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 101

int palindrome(char *a);

int main() {
        char *a = (char *)malloc(STRLEN*sizeof(char));
        scanf("%s", a);
        printf("%d",palindrome(a));
        free(a); return 0;
}

int palindrome(char *a) {
        int s = strlen(a);
                for(int i = 0; i < s/2; i++){
                        if(a[i] != a[s-i-1]) return 0;
                }
                return 1;
}
