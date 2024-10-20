#include <stdio.h>

void analysis(int*);

int main(){
	int num[2];
	while(1){
		scanf("%d %d", &num[0], &num[1]);
		if(num[0]==0&&num[1]==0)
			break;
		analysis(num);
	}
	return 0;
}

void analysis(int *num){
	if(num[0]%num[1]==0)
		printf("multiple\n");
	else if(num[1]%num[0]==0)
		printf("factor\n");
	else
		printf("neither\n");
}

