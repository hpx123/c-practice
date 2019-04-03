#include<stdio.h>

int df(int n){
	if(n==1) {
        printf("1");
        return 1;
	}
	else{
		df(n-1);
		df(n-1);
		printf("% d",n);
		
	}
}

int main() {
    int n;
    scanf("%d",&n);
    df(n);
    return 0;
}
