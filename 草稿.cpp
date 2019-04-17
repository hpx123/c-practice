#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, t = 0;
	char s[5];
	int a[1005];
	int m;
	scanf("%d",&m);
	while(m--){
		fflush(stdin);
		gets(s);
		a[t++] = atoi(&s[1]);
	}
	for( i = 0; i < t; i++){
		printf("%d\n",a[i]);
	}
	return 0;
} 
