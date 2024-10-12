#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 10000001

int main() {
        char a[STRLEN];
        fgets(a,STRLEN,stdin);
        int b = 0, i = 0, is_in_word = 0;

        while(a[i] == ' ') i++;

        while(a[i] != '\n') {
                if(a[i] == ' ') {
                is_in_word = 0;
                i++;
                }
                else {
                        if(!is_in_word) {
                                is_in_word = 1;
                                b++;
                        }
                        i++;
                }
        }

        printf("%d",b);
        return 0;
}
