#include<stdio.h>
#include<string.h>

int main(){
	char a[105];
	char b[105];
    gets(a);
    int i , j;
    for(i = 0; i < strlen(a); i++)
    {
    	if(a[i] == ' ') {
    		a[i++] = '\0';
    		while(a[i] == ' ') {
    			i++;
			}
			for(j = 0; a[i] != '\0';) {
				b[j++] = a[i++];
			}
			b[j] = '\0';
			break;
		}
    	continue;
	}
	for(i=0;b[i]!='\0';i++){
		printf("%c",b[i]);
	}
    return 0;
}

