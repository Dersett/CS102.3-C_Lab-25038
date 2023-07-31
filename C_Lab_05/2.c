#include <Stdio.h>
int main()

{
    int rem,num,digit;
    printf("Enter Number: ");
    scanf("%d",&num);
    do
    {
        digit= num%10;
        rem=rem*10+digit ;
        num /=10;
    }while (num!=0);


    printf("Reversed Number: %d",rem);
}
