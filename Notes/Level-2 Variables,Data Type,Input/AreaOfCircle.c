#include<stdio.h>
int main(){
  int area;
  int pi = 3.14159;
  int r;
  printf("Enter the radius of the circle: ");
  scanf("%d",&r);

  area = pi * r * r;
  printf("Area of circle radius is :%d",area);
  return 0;
}