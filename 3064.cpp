#include<stdio.h>
#define MAX 5000001

int main(){
	int x, i;
	double sum = 1;
	scanf("%d",&x);
	for(i = 2; i < MAX; i++){
		sum = sum + 1.0 / i ;
		if(sum >= (double)x){
			break;
		}
	} 
	if(i >= (MAX - 1)){
		printf("Error!");
	}
	else{
		printf("%d",i); 
	}
	return 0;
}
