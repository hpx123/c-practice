#include<stdio.h>

int main(){
	int n, result = 0, flag = 1;
    scanf("%d",&n);
    if(n < 0){
  		n = -n;
  		flag = -1;
 	}
 	while(n > 0){
        int r;
        r = n % 10;
        result = result * 10 + r;
    	n /= 10;
    }
 	printf("%d\n", result*flag);
	return 0;
}
