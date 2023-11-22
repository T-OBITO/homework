#include<stdio.h>
int main (){
  int num ,c,b,d;
  printf ("Enter the number you want to check ");
  scanf("%d",&num);
  while (num !=0){
    c=num%10;
    num=num/10;
    c=b;
    d=c**b;
  }
  if (d==num){
    printf("It is angstrom number");
  }
  else{
    printf("It is not an angstrom number");
  }
  return 0;
}
