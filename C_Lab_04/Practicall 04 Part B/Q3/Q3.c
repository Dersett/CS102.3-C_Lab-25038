#include <stdio.h>
int main()
{
    int num,fac=1;
    printf("Enter Number to get the factorial: ");
    scanf("%d",&num);

    if(num<0){
        printf("INVALID INPUT");
    }
    else if(num==0){
        printf("Factorial=1");
    }
    else{
        for(int i=1;i<=num;i++){
            fac*=i;
        }
    }
    printf("Factorial= %d",fac);
}
