#include<stdio.h>
#include<string.h>

int judge(int n){
	int i, m = 0;
	while(n != 0){
		i = n % 10;
		n = n / 10;
		if(i % 2 == 0 && i / 2 == 1){
			++m;
		}
	}
	return m;
}

int main(){
	int n, m, i, count = 0;
	scanf("%d %d",&n, &m);
	for(i = n; i <= m; i++){
		count += judge(i);
	}
	printf("%d",count);
	return 0;
} 

