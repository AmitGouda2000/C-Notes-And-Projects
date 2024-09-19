#include<stdio.h>
int main(){
  int number;
  char name[20];
  float point;
  double twice;
  printf("The Size OF Integer is %lu",sizeof(number));
  printf("The size of character is %lu",sizeof(name));
  printf("the size of float point is %lu",sizeof(point));
  printf("the size of twice is %lu",sizeof(twice));
  return 0;
}