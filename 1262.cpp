#include<stdio.h>

int main(){
	int n, sum;
	scanf("%d",&n);
	sum = (n - 1)*(n - 2)*(n - 3) / 6;
	printf("%d",sum);
	return 0;
}

