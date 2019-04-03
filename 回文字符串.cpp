#include<stdio.h>
#include<string.h>

char s[1005];

int huiwen (char *s,int low,int high){
    if(low>high){
        printf("Yes");
        return true;
    }
    if(s[low]==s[high]){
        ++low;
        --high;
        huiwen(s,low,high);
    }
    else{
        printf("No");
        return false;
    }
}

int main(){
    int i;
    scanf("%s",s);
    huiwen(s,0,strlen(s)-1);
    return 0;
}
