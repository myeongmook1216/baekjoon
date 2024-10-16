#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10000

int change_to_decimal(char *N, int B);

int main(){
	char *N = (char*)malloc((SIZE + 1) * sizeof(char));
	scanf("%s", N);
	int B;
	scanf("%d", &B);
	int result = change_to_decimal(N,B);
	printf("%d", result);

	free(N);
	return 0;
}

int change_to_decimal(char *N, int B){
	int string_length = strlen(N);
	int result = 0;
	int power = 1;
	int digit = 0;
	for(int i = string_length-1; i>=0; i--){
		if(N[i]-'0'<10)
			digit = N[i]-'0';
		else
			digit = N[i]-'A' + 10;
		result += digit*power;
		power*=B;
	}
	return result;
}
