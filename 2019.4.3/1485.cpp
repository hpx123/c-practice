#include<stdio.h>
#include<string.h>

int main(){
	char s;
	int a[26] = {0};
	int i;
	scanf("%c",&s);
	while(s >= 97 && s <=122 ){
		a[ s - 'a']++;
		scanf("%c",&s);
	}
	int sum = 0;
	for(i = 0; i < 26; i++){
		sum += a[i]%2;
	}
	printf("%d",sum);
	return 0;
}
