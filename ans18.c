//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main(){
    int num;
    printf("1.January\n");
    printf("2.February\n");
    printf("3.March\n");
    printf("4.April\n");
    printf("5.May\n");
    printf("6.June\n");
    printf("7.July\n");
    printf("8.August\n");
    printf("9.September\n");
    printf("10.October\n");
    printf("11.November\n");
    printf("12.December\n");
    printf("Choose the number with respect to month->\n");
    scanf("%d",&num);
    if(num==1||num==3||num==5||num==7||num==8||num==10||num==12){
        printf("\"%d\"th month contains 31 days",num);
    }
    else if(num==2){
        printf("28 days in a common year and 29 days in leap years");
    }
    else
        printf("\"%d\"th month contains 30 days",num);
        return 0;
    
}