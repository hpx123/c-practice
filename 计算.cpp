#include<stdio.h>

int main(){
	long int n, m;
	char c;
	scanf("%ld %ld",&n, &m);
	getchar();
	scanf("%c",&c);
	if(c == '+'){
		printf("%ld",n+m);
	}
	else if(c == '-'){
		printf("%ld",n-m);
	}
	else if(c == '*'){
		printf("%ld",n*m);
	}
	else if(c == '/'){
		printf("%ld",n/m);
	}
	return 0;
}
