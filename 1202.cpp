#include<stdio.h>

int main(){
	int i, n, sum = 0, a[105];
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%d",sum);
	return 0;
}
