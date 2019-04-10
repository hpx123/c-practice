#include<stdio.h>

int strange(int n){
	if(n == a[])
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else if(n ==3){
		return 0;
	}
	else{
		return strange(n - 1) + strange(n - 2) + strange(n - 3) + 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",strange(n));
	return 0;
}
