#include<stdio.h>
#include<math.h>

int dange(int n){
	int i;
	while(n != 0){
		i = n % 10;
		n = n / 10;
		if(i == 3 || i == 5){
			return 0;
		}
	}
	return 1;
}

int del(int n){
	int i;
	if(n % 3 == 0 || n % 5 == 0){
		return 0;
	}
	return 1;
}

int main(){
	int n, i, sum = 0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		if(dange(i) && del(i)){
			sum += pow(i, 2);
		}
	}
	printf("%d",sum);
	return 0;
}
