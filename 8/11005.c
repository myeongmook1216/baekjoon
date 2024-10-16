#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length_of_number(int N, int B);
void change_decimal_to_n(int N, int B, int count, char *result);

int main(){
	int N, B;
	scanf("%d %d", &N, &B);
	int lon = length_of_number(N, B);
	char *result = (char *)calloc(lon + 1, sizeof(char));

	change_decimal_to_n(N, B, lon, result);
	printf("%s", result);

	free(result);
	return 0;
}

void change_decimal_to_n(int N, int B,int count, char *result){
	int index = 0;
	result[count] = '\0';
	while(N > 0){
		int remainder = N % B;
		if(remainder  < 10)
			result[count-1] = '0' + remainder;
		else
			result[count-1] = 'A' + (remainder - 10);
		N /= B;
		count--;
	}
}


int length_of_number(int N, int B){
	int count = 0;
	while(N > 0){
		N /= B;
		count++;
	}
	return count;
}

