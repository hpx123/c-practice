#include<stdio.h>
#include<string.h>

char s[1005];

int main(){
    int i,j,len;
    gets(s);
    len=strlen(s);
    for(i=strlen(s)-1;i>=0;i--){
        if(s[i]==' '){
            for(j=i+1;j<len;j++){
                printf("%c",s[j]);
            }
            len=i;
            printf(" ");
        }
    }
    for(i=0;s[i]!=' ';i++){
        printf("%c",s[i]);
    }
    return 0;
}
