#include<stdio.h>
#define MAX 5

int main(){
	int i;
	float x;
	float sum = 0;
	scanf("%f",&x);
	for(i = 2; i < MAX; i++){
		sum = 1.0/i ;
		if(x < sum){
			break;
		}
	} 
	printf("%d",i);
	return 0;
}
