#include <stdio.h>
int main()
{
    char vol;
    printf("Enter A English Letter: ");
    scanf("%c",&vol);
    switch(vol)
    {
        case 'a':printf("This Letter Is A Vowel");break;
        case 'o':printf("This Letter Is A Vowel");break;
        case 'u':printf("This Letter Is A Vowel");break;
        case 'e':printf("This Letter Is A Vowel");break;
        case 'i':printf("This Letter Is A Vowel");break;
        default :printf("This Letter Is Not A Vowel");break;
    }
}
