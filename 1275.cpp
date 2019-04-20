#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, n, a[4], flag = 0;
	for(i = 0; i < 4; i++){
		scanf("%d",&a[i]);
	}
	int add = 0, subtract = 0;
	for(i = 1; i < 4; i++){
		if(a[i] - a[i - 1] > 0){
			add++;
		}
		else if(a[i] - a[i - 1] < 0){
			subtract++;
		}
	}
	if(subtract - add == 3){
		printf("Fish Diving");
	}
	else if(add - subtract == 3){
		printf("Fish Rising");
	}
	else if(abs(subtract + add) == 0){
		printf("Fish At Constant Depth");
	}
	else{
		printf("No Fish");
	}
	return 0;
}
