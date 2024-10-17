#include <stdio.h>

void calc_number_sequence(int);

int main(){
	int X;
	scanf("%d", &X);
	calc_number_sequence(X);
	
	return 0;

}
void calc_number_sequence(int X){
	// row / col
	int a_n = 0, n = 0, k = 0, col = 0;
	int row = 1;
	while(X > a_n){
		n++;
		a_n += n;
	}
	k = X - (a_n - n);
	col = n; row = 1;
	row = row + (k-1);
	col = col - (k-1);
	if(n%2 == 0)
		printf("%d/%d", row, col);
	else
		printf("%d/%d", col, row);
}

