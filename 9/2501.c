#include <stdio.h>
#define SIZE 2

void calc_divisor(int *);

int main(){
	int N[SIZE]; // N = natural number
	scanf("%d %d", &N[0], &N[1]);
	calc_divisor(N);
	return 0;
}

void calc_divisor(int *N){
	int count = 0;
	for(int i = 1 ; i <= N[0]; i++){
		if(N[0] % i == 0){
			count++;
		}
		if(count == N[1]){
			printf("%d\n", i);
			return;
		}
	}
	printf("0\n");
}
