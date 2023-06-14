#include <stdio.h>
int main()

{
   //question 3
   int num;
   double val,aws;
   printf("Enter the respective number of the operation you  \n\n");
   printf("1-Circumference of a circle \n2-Area of a circle \n3-Volume of a sphere \n\n");
   printf("Enter The Respective Number: ");
   scanf("%d",&num);

   if (num=1)
   {
       printf(" \n");
       printf("**Circumference Of A Circle** \n");
       printf("Enter Radius Of The Cirlce: ");
       scanf("%lf",&val);
       aws=2*3.14*val;
       printf("Circumference of the circle is: %.2lf",aws);


   }
   else if(num==2)
   {
       printf(" \n");
       printf("**Area Of A Cirlce** \n");
       printf("Enter Radius Of The Cirlce: ");
       scanf("%lf",&val);
       aws=3.14*val*val;
       printf("Area Of The Cirlce is: %.2lf",aws);


   }
   else if(num==3)
   {
       printf(" \n");
       printf("**Volume Of  A Sphere** \n");
       printf("Enter Radius Of The Cirlce: ");
       scanf("%lf",&val);
       aws=4/3.0*3.14*val*val*val;
       printf("Volume Of The Sphere is: %.2lf",aws);

   }
   else
   {
       printf("Invalid Input");
   }

}
