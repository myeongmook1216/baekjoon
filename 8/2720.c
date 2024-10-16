#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

void give_change(int*, int*, int**, int);
void print_change(int**, int);

int main(){
	int T = 0;
	scanf("%d", &T);
	
	int *change = (int *)calloc(T, sizeof(int));
	for(int i =0; i < T; i++)
		scanf("%d", &change[i]);

	int *change_unit = (int *)calloc(SIZE, sizeof(int));
	change_unit[0] = 25;
	change_unit[1] = 10;
	change_unit[2] = 5;
	change_unit[3] = 1;
	
	int **change_unit_quantity = (int **)calloc(T, sizeof(int*));
	for(int i = 0; i < T; i++)
		change_unit_quantity[i] = (int *)calloc(SIZE, sizeof(int));

	
	give_change(change, change_unit, change_unit_quantity, T);
	print_change(change_unit_quantity, T);
	
	
	for(int i = 0; i < T; i++)
		free(change_unit_quantity[i]);
	free(change_unit_quantity);
	free(change_unit);
	free(change);
	
	return 0;
}

void give_change(int *change, int *c_u, int **c_u_q, int T){
	int index = 0;
	int index_2 = 0;
	int next_num = 0;
	for(int i = 0; i < T; i++){
		next_num = change[i];
		for(int j = 0; j < SIZE; j++){
			c_u_q[i][j] = next_num / c_u[j];
			next_num %= c_u[j];
		}
	}
}

void print_change(int **c_u_q, int T){
	for(int i = 0; i < T; i++){
		for(int j = 0; j < SIZE; j++)
			printf("%d ", c_u_q[i][j]);
		printf("\n");
	}
	
}
