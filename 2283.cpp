#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cin>>n;
if(n==1||n==3) cout<<0<<endl;
else if(n==2) cout<<1<<endl;
else{
unsigned long long int a1=0,a2=1,a3=0;
unsigned long long int an;
for(int i=3;i<n;i++){
an=a1+a2+a3+1;
a1=a2; a2=a3; a3=an;
}
cout<<an<<endl;
}
return 0;
} 
