#include <stdio.h>
int main()
{


        int num1,num2,in,tot;
        printf("WELCOME \nEnter The Numbers Your Wish To Calculate\n\n");
        printf("First Number: ");
        scanf("%d",&num1);
        printf("Second Number: ");
        scanf("%d",&num2);
        printf("Enter the number of the respective Operation: \n\n");
        printf("1-Addition|+ \n2-Sudickbstraction|- \n3-Multiplication|* \n4-Divison|/ \n\n");
        printf("Enter the respective Number: ");
        scanf("%d",&in);
        if(in==1)
        {
            tot=num1+num2;
            printf("Your total is %d",tot);

        }
        else if (in==2)
        {
            tot=num1-num2;
            printf("Your Subracted Amount is %d",tot);

        }
        else if(in==3)
        {
            tot=num1*num2;
            printf("Your Multiplicated Amount is %d",tot);
        }
        else if (in==4)
        {
            tot=num1/num2;
            printf("Your Divided Amount is %d", tot);

        }
        else
        {
            printf("Invalid");
        }

}
