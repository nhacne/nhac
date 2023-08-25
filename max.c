#include <stdio.h>

int main () {
	int x,y;
	printf("\bnNhap 2 so: ");
	scanf("%d %d",&x,&y);
	findMaxNumber(x,y);
	
	return 0;
}

void findMaxNumble(int a,int b){
	if (a>b){
		printf("Max: %d",a);
	}
	else {
		printf("Max: %d",b);
	}
}


	
	

