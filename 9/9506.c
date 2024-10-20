#include <stdio.h>
#include <stdlib.h>

void divisor(int);

int main(){
	int n;
	while(1){
		scanf("%d", &n);
		if(n == -1)
			break;

		divisor(n);
	}
	return 0;
}

void divisor(int n){
	int sum = 0;
	int len = 0;
	int *div = (int *)calloc(n, sizeof(int));
	for(int i = 1; i < n; i++){ // 완전수는 자신을 제외한 모든 약수들의 합이므로
		if(n % i == 0){
			div[len] = i;
			sum += i;
			len++;
		}
	}
	if(sum == n){
		printf("%d = ",n);
		for(int i = 0; i < len; i++){
			printf("%d", div[i]);
			if(i != len-1)
				printf(" + ");
		}
		printf("\n");
	}
	else
		printf("%d is NOT perfect.\n", n);
	
	free(div);
}


