#include <stdio.h>
#include <stdlib.h>

void num_of_prime_number(int *, int);

int main(){
	int size = 0;
	scanf("%d", &size);
	int *N = (int *)calloc(size, sizeof(int));
	for(int i = 0; i < size; i++)
		scanf("%d", &N[i]);
	num_of_prime_number(N, size);
	free(N);
	return 0;
}

void num_of_prime_number(int *N, int s){
	int count = 0;
	int count_2 = 0; // 소수 개수
	for(int i = 0; i < s; i++){
		if(N[i] == 1)
			count = 1;
		else {
			for(int j = 2; j < N[i]; j++){
				if(N[i] % j == 0){
					count++;
					break;
				}
			}
		}
		if(count == 0)
			count_2++;
		else
			count = 0;
	}
	printf("%d", count_2);
}
