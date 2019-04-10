#include<stdio.h>

int sum = 0;

int calculator(char *s, int *k){
	if(*s == '+'){ 
			sum += *k;
		}
	else if(*s == '-'){ 
		sum -= *k;
	} 
	else if(*s == '*'){ 
		sum *= *k;
	} 
	else if(*s == '/'){
		sum /= *k;
	}
	else if(*s == '%'){
		sum %= *k;
	}
	return sum;
}

int main(){
	int n, m, i, k;
	char s;
	scanf("%d",&n);
	scanf("%d",&m);
	sum += m;
	while(n--){
		scanf("%c%d",&s,&k);
		if(k == 0){
			printf("Error");
			return 0;
		}
		calculator(&s, &k);
		printf("%d\n",sum);
		//sum += calculator(s, k);
	}
	//printf("%d",sum);
	return 0; 
}
