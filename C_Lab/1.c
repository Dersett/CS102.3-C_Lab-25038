#include <Stdio.h>
int mian()
{

    int num,digit,sum=0;

    printf("Enter a Number: ");
    scanf("%d",&num);
    while (num>0)
    {
        digit = num%10;
        sum+= digit;
        num /= 10;
    }
    printf("Sum of digits %d\n",sum);
}
