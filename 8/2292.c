#include <stdio.h>
#define CONSTANT 6

int calc_roomnumber(int);
int main(){
	int N;
	scanf("%d", &N);
	int result = calc_roomnumber(N);
	printf("%d", result);
}

int calc_roomnumber(int N){
	int a_n = 0;
	int count = 1;
	if(N==1)
		return 1;
	else if(N==2)
		return 2;
	else{
		do{
			a_n += CONSTANT*count;
			count++;

		} while((N-2)/a_n!=0);
		return count;
	}
}



