#include<stdio.h>
#include<string.h>

int main(){
	char a[10], s[1000000];
	int i, count = 0, j;
	gets(a);
	getchar();
	gets(s);
	int *p;
	p = s;
	while(){
		if(strncmp(a,s,strlen(a)) == 0){
			count++;
		}
		else{
			*p++;
		}
	}
}
