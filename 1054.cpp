#include<stdio.h>

int main(){
	int n, a[50], i, sum;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	if(n == 0){
		printf("0");
		return 0;
	}
	sum = a[0] * 6  + 5;
	for(i = 1; i < n; i++){
		if(a[i] - a[i - 1] > 0){
			sum += (a[i] - a[i - 1]) * 6 + 5;
		}
		else{
			sum += (a[i - 1] - a[i]) * 4 + 5; 
		}
	}
	printf("%d",sum);
	return 0;
}
