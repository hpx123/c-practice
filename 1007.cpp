#include<stdio.h>

int main(){
	int n, i;
	double sum = 1;
	scanf("%d",&n);
	for(i = 2; ; i++){
		sum += 1.0 / i;
		if(sum - n > 0.0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
