#include <stdio.h>

void calc_prime_number(int *);

int main(){
	int N[2]; // M , N
	scanf("%d %d", &N[0], &N[1]);
	calc_prime_number(N);
	return 0;
}

void calc_prime_number(int *N){
	int min = 0, sum = 0, count = 0; 
	for(int i = N[0]; i < N[1]+1; i++){
		if(i == 1){
			continue;
		}
		for(int j = 2 ; j < i; j++){
			if(i % j == 0){
				count++;
				break;
			}
		}
		if(count == 0){
			if(sum == 0)
				min = i;
			sum += i;
		}
			
		else
			count = 0;
	}
	if(sum == 0)
		printf("%d\n", -1);
	else
		printf("%d\n%d\n", sum, min);
	

}
