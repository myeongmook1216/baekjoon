#include <stdio.h>
#include <stdlib.h>
#define STRLEN 100

int main() {
        char *a = (char *)malloc(STRLEN*sizeof(char));
        scanf("%s",a);
        int count = 0;
        for(int i = 0 ; a[i]; i++) {
                if(a[i] == '='){
                        count --;
                        if(a[i-1] == 'z' && a[i-2] == 'd')
                                count--;
                }
                else if (a[i] == '-') count --;
                else if(a[i] == 'j' && (a[i-1] == 'l' || a[i-1] == 'n')) count--;
                count++;
        }
        printf("%d",count);
        free(a); return 0;
}
