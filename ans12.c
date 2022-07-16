//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(){
    int temp;
    char a;
    printf("Enter character:");
    scanf("%c",&a);
    temp=a;
    if(65<=temp&&temp<=90){
        printf("%c is Uppercase\n",a);
    }
    if(97<=temp&&temp<=122){
        printf("%c is Lowercase",a);
    }
    return 0;
}