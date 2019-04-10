#include<stdio.h>
#include<string.h>

int a[5];
int sub1, sub2, sub3;

void five(int n){
	int i, k = 10000;
	for(i = 0; i < 5; i++){
		a[i] = n/k;
		n = n%k;
		k /= 10;
	}
	sub1 = a[0]*100 + a[1]*10 + a[2];
	sub2 = a[1]*100 + a[2]*10 + a[3];
	sub3 = a[2]*100 + a[3]*10 + a[4];
}

int over(int n,int k){                          
	if( n % k == 0 ){
		return 1;
	}
	return 0;
}

int main(){
	int n, k, i;
	int flag = 0;
	scanf("%d",&k);
	for(i = 10000; i <= 30000; i++){
		five(i);
		if(over(sub1, k) != 0 && over(sub2, k) != 0 && over(sub3, k) != 0){
			flag = 1;
			printf("%d\n",i);
		}
	}
	if(flag == 0){
		printf("No");
	}
	return 0;
}
