#include<stdio.h>
#include<string.h>

int main(){
	char s[1005];
	int m, i;
	scanf("%d %s",&m, s);
	if(s[m - 1] < 0 || s[m - 1] > 255){
		printf("%c%c",s[m - 1],s[m]);
	}
	else{
		printf("%c", s[m - 1]);
	}
 	return 0;              
}
