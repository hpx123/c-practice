#include<stdio.h>

int main(){
	int n, m, i, t = 7, j;
	for(i = 0; i < 7; i++){
		scanf("%d %d",&n, &m);
		if(n + m > t){
			t = n + m;
			j = i;
		}
	}
	printf("%d", j + 1);
	return 0;
}
