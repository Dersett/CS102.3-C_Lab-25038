#include <stdio.h>
double ifd(int a,float b)
{
    double prod;
    prod=a*b;

return prod;

}
int main()
{

    printf("Product is: %.2lf", ifd(5,5.0));
}
