#include <stdio.h>
#define SIZE 3

void print_triangle(int *);

int main(){
	int N[SIZE];
	for(int i = 0; i < SIZE; i++)
		scanf("%d", &N[i]);
	print_triangle(N);
	return 0;
}

void print_triangle(int *N){
	if(N[0] + N[1] + N[2] == 180){
		if(N[0] == N[1] && N[1] == N[2])
			printf("Equilateral");
		else if(N[0] == N[1] || N[1] == N[2] || N[2] == N[0])
			printf("Isosceles");
		
		else
			printf("Scalene");	
	}
	else
		printf("Error");
}
		
