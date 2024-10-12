#include <stdio.h>

int compareN(int a,int b, int c);

int main() {
        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);
        printf("%d", compareN(a,b,c));
        return 0;
}

int compareN(int a,int b,int c){
        if(a==b && b==c) return (10000 + a*1000);
        else if((a==b) && (b!=c)) return (1000 + b*100);
        else if((b==c) && (a!=c)) return (1000 + b*100);
        else if((c==a) && (c!=b)) return (1000 + c*100);
        else { if(a>b) return 100*(a>c ? a:c);
                else return 100*(b>c ? b:c);}

}
