#include<stdio.h>
#include<string.h>

int main(){
    char s[1005];
    int i;
	scanf("%s",s);
	if(s[0] == '-'){
		for(i = 1; i < strlen(s); i++){
			printf("%c",s[i]);
		}
	}
	else{
		printf("-");
		puts(s);
	}
    return 0;
}
