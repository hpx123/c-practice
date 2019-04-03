#include<stdio.h>
int main(){
  float y,n;
  scanf("%f",&n);
  if(n<=50){
    y=n*0.53;
  }
  if(n>50){
    y=50*0.53+(n-50)*(0.53+0.05);
  }
  if(n>=0){
    printf("cost=%0.2f\n",y);
  }
  else{
    printf("Invalid Value\n");
  }
  return 0;
}
