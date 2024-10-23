#include <stdio.h>
#include <stdlib.h>
#define SIZE2 2

void calc_rectangular(int **, int);

int main(){
	int size;
	scanf("%d", &size);
	int **N = (int **)calloc(size, sizeof(int*));
	for(int i = 0; i < size; i++)
		N[i] = (int *)calloc(SIZE2, sizeof(int));
	for(int i = 0; i < size; i++)
		scanf("%d %d", &N[i][0], &N[i][1]);
	calc_rectangular(N, size);
	for(int i = 0; i< size; i++)
		free(N[i]);
	free(N);
	return 0;
}

void calc_rectangular(int **N, int s){
	int min_x = N[0][0] , min_y = N[0][1];
	int max_x = N[0][0] , max_y= N[0][1];

	for(int i = 1; i < s; i++){
		if(min_x >= N[i][0])
			min_x = N[i][0];
		if(max_x <= N[i][0])
			max_x = N[i][0];
		if(min_y >= N[i][1])
			min_y = N[i][1];
		if(max_y <= N[i][1])
			max_y = N[i][1];
	}
	int area = (max_x - min_x)*(max_y - min_y);
	printf("%d", area);
}
