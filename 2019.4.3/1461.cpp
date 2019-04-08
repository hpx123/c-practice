#include<stdio.h>
#include<string.h>

int main(){
	int i, j;
	char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int b[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	char s[1005];
	int sum = 0;
	gets(s);
	for(i = 0; i < strlen(s); i++){
		if(s[i] == 32){
				sum++;
		}
		else{
			for(j = 0; j < 26; j++){
				if(s[i] == a[j]){
					sum += b[j];
				}
			}	
		}
	}
	printf("%d",sum);
	return 0;	
}
