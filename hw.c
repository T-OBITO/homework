
// // calculate the sum of firt five numbers and their square and display the output 


#include <stdio.h>
int main ()
{
    
    int num=0 ,sqr=0;
    for (int i =1;i<=5;i++){
        num+=i;
        sqr+=i*i;

    }
    printf("sum %d",num+sqr);
    return 0;
}



// write a program to calculate energy bill .
// Read starting and ending meter readings and charges are as follows : 

// No of units                                   Consumed rate in RS  
// 200-500                                             3.50
// 100-200                                             2.50
// less than 100                                       1.50




#include<stdio.h>
int main ()
{
    float strt , end ,unit,rate  ;
    printf("Enter the starting meter reading :");
    scanf("%f",&strt);
    printf("Enter the ending meter reading :");
    scanf ("%f",&end);
    unit= end - strt;
    if (unit>=200 && unit<=500){
        rate =3.5*unit;
    }

    else if (unit<200 && unit>=100){
        rate =2.5*unit;
    }

    else if (unit<100 && unit>=0){
        rate =1.5*unit;

    }
    else {
        printf("invalid input ");

    }
    printf("charges = %f",rate );
    return 0;
}

