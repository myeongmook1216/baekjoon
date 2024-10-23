#include <stdio.h>
#define SIZE 3

void print_triangle(int *);

int main(){
	int N[SIZE];
	while(1){
		for(int i = 0; i < SIZE; i++)
			scanf("%d", &N[i]);
		if(N[0] == 0 && N[1] == 0 && N[2] == 0)
			break;
		print_triangle(N);
	}
	return 0;
}

void print_triangle(int *N){
	int calc_prob = (N[0] < N[1] + N[2]) && (N[1] < N[2] + N[0]) && (N[2] < N[0] + N[1]);
	if(calc_prob){
		if(N[0] == N[1] && N[1] == N[2])
			printf("Equilateral\n");
		else if(N[0] == N[1] || N[1] == N[2] || N[2] == N[0])
			printf("Isosceles\n");
		else
			printf("Scalene\n");	
	}
	else
		printf("Invalid\n");
}
		
