// write a program to count numbers that are not divisible by 2,3,and 5 
#include<stdio.h>
int main (){
    int a=0;
    for (int i=1;i<=100;i++){
        if (i%2==0 ||i%3==0||i%5==0){
            continue ;
        }
        else {
            a+=1;
        }
    }
    printf ("count of numbers : %d",a);
    return 0;
}

// write a program to print  * pattern using nested for loop

#include <stdio.h>
int main (){
    for (int i=1;i<=10;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
