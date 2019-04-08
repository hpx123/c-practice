#include<stdio.h>
#include<math.h>

int is_prime(int n){
	int i;
	if(n == 1){
		return 0;
	}
	for(i = 2; i <= sqrt(n); i++ ){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void change(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(){
	int a, b, i;
	long long sum = 0;
	scanf("%d %d",&a,&b);
	if(a > b){
		change(&a,&b);
	}
	for(i = a+1; i < b; i++){
		if(is_prime(i)){
			sum += i;
		}
	}
	printf("%lld",sum);
	return 0;
}

