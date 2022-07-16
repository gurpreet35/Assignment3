//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main(){
    int a,b,c,big;
    printf("Enter the value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);
    printf("Enter the value of third number:");
    scanf("%d",&c);
    big=a>b&&a>c?a:b>c?b:c;
    printf("Greatest number among %d,%d,%d is %d",a,b,c,big);
    return 0;
}