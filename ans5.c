//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int a ;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>99){
        printf("%d is three digit number",a);
    }
    else
    printf("%d is not three digit number",a);
    return 0;
}