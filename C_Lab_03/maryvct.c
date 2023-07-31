#include <Stdio.h>
int main()
{

    //prac number 3
    //7 question
    int basic,serv,sales,sal,sal2;
    char cmb;
    printf("Enter Monthly Sales");
    scanf("%d",&sales);
    printf("Enter Basic Salary");
    scanf("%d",&basic);
    printf("Salesmen working in Colombo enter C: ");
    scanf("%c",&cmb);
    printf("Enter Number of years working: ");
    scanf("%d",&serv);
    if (0<sales<=25000)
    {
        sal=basic*10/100;
    }
    else if(25000<=sales<=50000)
    {
        sal=basic*12/100;
    }
    else if(sales>=50000)
    {
        sal=basic*15/100;
    }

    if (cmb='C')
    {
        sal=sal+2500;
    }
    if (serv>=5)
    {
        sal2=basic*10/100;
        sal=sal+sal2;
    }
    printf("gross monthly remuneration: %d",sal);
}
