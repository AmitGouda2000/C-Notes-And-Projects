#include<stdio.h>
int main(){
  int a,b,swap;

  printf("enter the firs number:");
  scanf("%d",&a);

  printf("enter the second number:");
  scanf("%d",&b);

  swap = a;
  a = b;
  b = swap;

  printf("The swap of number is %d %d ",a,b);
  return 0;

 
}