#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char s[105];
	int i, n;
	scanf("%s",s);
	scanf("%d",&n);
	if(n >= 0 && n < strlen(s)){
		if(n == 0){
			printf("%s",s);
		}
		else{
			for(i = 0; i < n; i++){
				printf("%c",s[i]);
			}
		}
		
	}
	else if(n < 0 && abs(n) < strlen(s)){
		for(i = strlen(s) - abs(n); i < strlen(s); i++){
			while( s[strlen(s) - abs(n)]=='0' && i < strlen(s) - 1 && s[i] == '0') {
				++i;
			}
			printf("%c",s[i]);
		}
	}
	else{
		printf("Error");
	}
	return 0;
}
