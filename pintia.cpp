#include<stdio.h>
#include<math.h>

int main(){
	long long int n, len = 0, k;
	int i;
	scanf("%ld",&n);
	k = n;
	if(n == 0){
		printf("0");
		return 0;
	}
	while(n != 0){
		n = n / 10;
		len++;
	}
	len = pow(10,len - 1);
	while(len != 0){
		i = k / len;
		k = k % len;
		len = len / 10;
		printf("%d ", i);
	}
	return 0;
}
