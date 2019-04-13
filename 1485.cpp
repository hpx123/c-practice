#include<stdio.h>
#include<string.h>
#define MAX 1000000

char s[MAX];
int b[26] = {0};

int main(){
	char c;
	int i = 0;
	long int t = 0;
	while(scanf("%c",s[i])!=EOF){
		b[s[i] - 'a']++;
		i++;
		getchar();
	}
	
	/*scanf("%s",s);
	int i;
	long int t = 0;
	for(i = 0; i < strlen(s); i++){
		b[s[i] - 'a']++;
	}*/
	for(i = 0; i < 26; i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
