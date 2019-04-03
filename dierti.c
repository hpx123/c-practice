#include<stdio.h>

char s[1005];
char a[1005];

int main(){
    int i,j;
    scanf("%s",s);
    j=0;
    for(i=0;i<strlen(s);i++){
        a[j++]=s[i];
        if(a[j-1]=='e'&&a[j-2]=='m'){
            j=j-2;
        }
    }
    a[j]='\0';
    for(i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    return 0;
}
