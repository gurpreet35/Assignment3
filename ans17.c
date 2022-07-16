//. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 
#include<stdio.h>
int main(){
    int  a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c||a+c>b||b+c>a){
        printf("Triangle is valid->:%d,%d,%d\n",a,b,c);
    }
    else
        printf("Triangle is not valid->:%d,%d,%d\n",a,b,c);
    }
    else
    printf("Triangle is not valid please give correct input");
return 0;
    
}
