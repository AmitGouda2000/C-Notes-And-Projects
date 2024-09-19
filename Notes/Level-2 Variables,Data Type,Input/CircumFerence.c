#include<stdio.h>
int main(){
  int circum;
  int pi = 3.14159;
  int r;

  printf("enter the r");
  scanf("%d",&r);

  circum = 2 * pi * r;
  printf("The circum of circle is %d",circum);
  return 0;
}