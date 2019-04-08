#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b;
}

int cp(int a,int b){
	int i, t;
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	for(i = a; i >= 1; i--){
		if(b % i == 0 && a % i == 0){
			return i;
		}
	}
}

int main(){
	int n, i, j;
	int a[1005];
	int gy = 1, sum = 1;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	sum = a[0] * a[1] / cp(a[0], a[1]);
	for(i = 2; i < n; i++){
		sum = sum * a[i] / cp(sum,a[i]);
	}
	printf("%d",sum);
	return 0;
}
