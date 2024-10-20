#include <stdio.h>

void prime_factorization(int);

int main(){
	int N;
	scanf("%d", &N);
	if(N != 1)
		prime_factorization(N);
	return 0;
}

void prime_factorization(int N){
	int i = 2;
	while(1){
		if(N % i == 0){
			N /= i;
			printf("%d\n", i);
			if(N==1)
				break;
		}
		else
			i++;
	}
}
		
