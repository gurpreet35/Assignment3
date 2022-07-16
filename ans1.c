//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive Number",a);
    }
    else
        printf("%d is  non-positive Number",a);
return 0;
}