#include<stdio.h>

int main(){
	int i, n, count = 0;
	int a[10];
	for(i = 0; i < 10; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i = 0; i < 10; i++){
		if(a[i] <= n + 30){
			count++;
		}
	}
	printf("%d",count);
	return 0;
} 
