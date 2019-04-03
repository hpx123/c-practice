#include<stdio.h> 
int n,k=0;
void js(int a);
int main(){	
	scanf("%d",&n);	
	js(n);	
	printf("%d",k);	
	return 0;
}
void js(int a){	
	int i;
	k++;	
	if(a==1) 
		return ;
	for(i=1;i<=a/2;i++)
		js(i);
}

