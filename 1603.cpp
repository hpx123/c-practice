#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000000 

int main(){
	int l, r, num;
	int n, i;
	scanf("%d",&n);
	int a = 0, b = MAX, c = 0;
	for(i = 0; i < n; i++){
		scanf("%d %d %d",&l, &r, &num);
		if( l > a || l == a && r < b || l ==a && r == b && num > c){
			a = l;
			b = r;
			c = num;
		}
		
	}
	printf("%d",c);
	return 0;
}
