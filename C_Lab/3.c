#include <Stdio.h>
int main()
{
    int base,expo,num=1;
    printf("Enter Base value: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&expo);

    for (int i=0;i<expo;i++)
    {
        num*=base ;
    }
    printf("%d",num);

}
