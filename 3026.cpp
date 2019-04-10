#include<stdio.h>
#include<math.h>

int a[100000];

int self_power(int k){
	int i, sum = 0, len = 0, ans = 0;;
	int t = k;
	while(t != 0){
		a[ans++] = t % 10; 
		t = t / 10;
		len++;
	}
	for(i = 0; i < len; i++){
		sum += pow(a[i], len);
	}
	if(sum == k){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n, m;
	int i, flag = 0;
	scanf("%d %d",&n, &m);
	for(i = n; i <= m; i++){
		if(self_power(i) == 1){
			printf("%d\n",i);
			flag = 1;
		}
	}
	if(flag == 0){
		printf("No solution");
	}
	return 0;
}
