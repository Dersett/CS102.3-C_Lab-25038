#include <stdio.h>
int mian()
{
    //Question 01.1
    int num,aws;
    printf("Enter Number");
    scanf("%d",&num);
    aws=num%2;
    if (aws==0)
    {
        print("%d is a Even number",num);

    }
    else
    {
        printf("%d is a Odd Number",num);

    }

    //question 01.2
    printf("Enter Number");
    scanf("%d",&num);
    aws=num%2;
    switch (aws)
    {
        case 0: printf("%d is Even",num);break;
        default : printf("%d is Odd",num);break;
    }




}
