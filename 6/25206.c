#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUBLEN 51
#define CreditLen 3
#define INPUTLEN 20
#define CREDIT 9

double ReturnNum(char *c);

int main() {
        char **a = (char **)malloc(INPUTLEN*sizeof(char *));
        double *b = (double *)malloc(INPUTLEN*sizeof(double));
        char **c = (char **)malloc(INPUTLEN*sizeof(char *));
        double numerator = 0;
        double denominator = 0;

        for(int i = 0; i <INPUTLEN; i++) {
                a[i] = (char *)malloc(SUBLEN*sizeof(char));
                c[i] = (char *)malloc(CreditLen*sizeof(char));
                scanf("%s %lf %s", a[i], &b[i], c[i]);
                if(c[i][0] == 'P') continue;

                numerator += ReturnNum(c[i])*b[i];
                denominator += b[i];

                getchar();
        }
        printf("%f", numerator/denominator );
}

double ReturnNum(char *c){
        double j = 0;
        if(c[0] != 'F') j = 'A' - c[0] + 4;
        else return 0;

        if(c[1] == '+') return j + 0.5;
        else return j;
}
