#include <stdio.h>
int main()
{
    int count,size1,sum,tot=0;
    printf("Enter Array 1 Size: ");
    scanf("%d",&size1);
    //Getting Array Size from user
    int arr1[size1],arr2[size1],arr3[size1];
    //Getting inputs from user for Array 1
    for(count=0;count<size1;count++)

    {
        printf("Enter Number for the %d position in array 1: ",count);
        scanf("%d",&arr1[count]);

    }

    //Scaler Sum
    //Scaler Sum Calculation
    for(count=0;count<size1;count++)
    {

        sum=sum+arr1[count];
    }
    //Scaler Sum Output
    printf("Scaler Sum:%d \n",sum);

    //Vector Sum
    //Getting user inputs for Array 2
    for(count=0;count<size1;count++)

    {
        printf("Enter Number for the %d position in array 2: ",count);
        scanf("%d",&arr2[count]);

    }
    //Vector Sum Calculation
    for(count=0;count<size1;count++)
    {
        sum=arr1[count]+arr2[count];
        arr3[count]=sum;
    }
    //Vector Sum Output
    for(count=0;count<size1;count++)
    {
        printf("%d ",arr3[count]);
    }
    //Vector Product
    //Vector Product Calculation
    printf("\nVector Product: ");
    for(count=0;count<size1;count++)
    {
        sum=arr1[count]*arr2[count];

        arr3[count]=sum;
    }
    //Vector Product Output
    for(count=0;count<size1;count++)
    {
        printf("%d ",arr3[count]);
    }

    //Scaler Product Calculation
    int sp,pp;
    for(count=0;count<size1;count++)
    {
        pp=arr1[count]*arr2[count];
        sp+=pp;
    }

    //Scaler Product Output
    printf("\nScaler Product: ",sp);






}

