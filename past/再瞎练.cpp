#include<stdio.h>
#include<string.h>

int main(){
	char s[105];
	int i;
	scanf("%s",s);
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			printf("%c",s[i]);
		}
	} 
	return 0;
}
