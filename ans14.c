//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
    int num,a,b,c,temp;
    printf("Enter Number:");
    scanf("%d",&num);
    if((num%3==0)&&(num%7==0)){
        printf("%d is divisible by 3 and divisible by 7",num);
    }
    else if(num%3==0){
        printf("%d is divisible by 3",num);
    }
    else if(num%7==0){
        printf("%d is divisible by 7",num);
    }
    else
     printf("%d is not divisible by 3 and divisible by 7",num);
    return 0;
}