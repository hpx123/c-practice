#include<stdio.h>

int main(){
	int n, i = 0;
	scanf("%d",&n);
	for( n; n > 0 ; ){
		n = n / 10;
		i++;
	}
	printf("%d",i);
	return 0;
}
