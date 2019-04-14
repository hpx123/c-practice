#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}

int is_prime(int n){
	int i;
	if(n ==1 || n == 0){
		return 0;
	}
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	char s[105];
	int b[26] = {0};
	int n, i;
	scanf("%s",s);
	for(i = 0; s[i] != '\0'; i++){
		b[s[i] - 'a']++;
	}
	qsort(b, 26, sizeof(b[0]),cmp);
	i = 0;
	while(b[i] == 0){
		i++;
	}
	if(is_prime(b[25] - b[i])){
		printf("Lucky Word");
		printf("%d",b[25] - b[i]);
	}
	else{
		printf("No Answer");
		printf("0");
	}
	return 0;
}
