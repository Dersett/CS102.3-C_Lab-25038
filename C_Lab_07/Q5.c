#include <stdio.h>

void sm()
{
    int num1,num2,sum;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of values: %d \n", sum);
}
int main()
{
    sm();
    sm();
}
