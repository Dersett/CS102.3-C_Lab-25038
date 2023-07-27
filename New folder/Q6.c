#include <stdio.h>
void sdp(int a,int b)
{
    int sum,prod,diff;
    sum=a + b;
    prod=a*b;
    diff=a-b;
    printf("Sum: %d   Product: %d  Difference: %d", sum,prod,diff);
}
int main()
{
    sdp(4,3);
}
