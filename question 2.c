#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d" ,&num);
    if(num<0)
    printf("Given number is negative");
    else if(num>0)
    printf("Given number is positive");
    else if(num==0)
    printf("Given number is zero");
    else
    printf("Enter a valid input");
    return o;
}
