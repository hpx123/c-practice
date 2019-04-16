#include<stdio.h>

int main(){
	char a, b;
	int i, x, y;
	for(i = 0; i < 3; i++){
		scanf("%c",&a);
		x = a - 'A';
		scanf("%c",&b);
		y = b - 'A';
		printf("%d %d",x, y);
		
	}
	return 0;
}
