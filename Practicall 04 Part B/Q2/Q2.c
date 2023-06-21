#include <stdio.h>
int main()
{
    //While
    int count=1,num;
    float tot

    while(count<=10){
        printf("Enter %d Marks",count);
        scanf("%d",&num);
        tot=tot+num;
        count++;
    }
    tot=tot/10;
    if(tot<=50)
    {
        printf("Fail");
    }
    else{
        printf("Pass");
    }

}

