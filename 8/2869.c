#include <stdio.h>
//#include <stdlib.h>

#define SIZE 3

void calc_go_to_top(int*);

int main(){
	int snail[SIZE];
	// A(up) B(down) V(top) 
	scanf("%d %d %d", &snail[0], &snail[1], &snail[2]);
	//for(int i = 0 ; i < SIZE; i++)
	//	scanf("%d", &snail[i]);
	calc_go_to_top(snail);
	return 0;
}

void calc_go_to_top(int *s){
	int d = (s[2] - s[1] - 1) / (s[0] - s[1]) + 1;
	printf("%d", d);
	
	/*
	int current_state = 0;
	int count = 0;
	while(1){
		count++;
		current_state += s[0];
		if(s[2] <= current_state){
			printf("%d", count);
			break;
		}
		else
			current_state -= s[1];
	}
	*/
}
