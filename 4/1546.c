#include <stdio.h>
#include <stdlib.h>

double maxNUM(double *g,int *k);
double Average(double *mN, double *g);

int main() {
        int N;
        int k = 0;
        scanf("%d", &N);
        double *g = (double *)malloc(N*sizeof(double));
        while(N-->0) {
                scanf("%lf ", &g[k]);
                k++;
        }
        double mN = maxNUM(g,&k);
        double n1 = 0;
        for(int i = 0; i < k; i++) {
                g[i] = Average(&mN,&g[i]);
                n1 += g[i];
        }
        printf("%lf", n1/k);
        free(g); return 0;
}

double maxNUM(double *g,int *k) {
        double mN = g[0];
        for(int i = 1; i < *k; i++) {
                if(g[i] > mN) mN = g[i];
        }
        return mN;
}

double Average(double *mN, double *g) {
        return (*g)/(*mN)*100;
}
