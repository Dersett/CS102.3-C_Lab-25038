#include <stdio.h>
int main()
{
    int mo;
    printf("Enter Month Number: ");
    scanf("%d",&mo);
    switch (mo)
    {
        case 1 : printf("Month You Enterd Has 31 Days In It");break;
        case 2 : printf("Month You Enterd Has 28 Days In It");break;
        case 3 : printf("Month You Enterd Has 31 Days In It");break;
        case 4 : printf("Month You Enterd Has 30 Days In It");break;
        case 5 : printf("Month You Enterd Has 31 Days In It");break;
        case 6 : printf("Month You Enterd Has 30 Days In It");break;
        case 7 : printf("Month You Enterd Has 31 Days In It");break;
        case 8 : printf("Month You Enterd Has 31 Days In It");break;
        case 9 : printf("Month You Enterd Has 30 Days In It");break;
        case 10: printf("Month You Enterd Has 31 Days In It");break;
        case 11: printf("Month You Enterd Has 30 Days In It");break;
        case 12: printf("Month You Enterd Has 31 Days In It");break;
        default :printf("Invalid");break;

    }
}
