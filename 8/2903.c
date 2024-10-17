#include <stdio.h>
#include <math.h>
#define CONSTANT 2

int calc_sequence(int);

int main(){
	int N;
	scanf("%d", &N);
	int result = calc_sequence(N);
	printf("%d", result);
	return 0;
}


int calc_sequence(int N){
	int a_n = 2;
	if(N==0)
		return a_n * a_n;
	else{
		for(int i = 0; i < N; i++){
			a_n += pow(CONSTANT, i);
		}
		return a_n * a_n;
	}

}
