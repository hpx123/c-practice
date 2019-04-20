#include<stdio.h>

int main(){
	int i, n, m, a[30001] = {0}, b[30001], max = -0x77777, k, same, j = 0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		scanf("%d",&m);
		a[m]++;
	}
	for(i = 0; i < 30001; i++){
		if(a[i] > max){
			max = a[i];
			k = i;
		}
	}
	int flag = 0;
	for(i = 0; i < 30001; i++){
		if(a[i] != 0){
			printf("%d %d\n",i, a[i]);
		}
		if(a[i] == max){
			b[j++] = i;
			flag = 1; 
		}
	}
	if(flag){
		for(i = 0; i < j; i++){
			printf("%d %d\n",b[i], max);
		}
	}
	return 0;
}
