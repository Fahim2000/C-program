#include<stdio.h>
int main()
{
   int number;
    printf("Enter an integer: ");
    scanf("%d",&number);
    int reminder=number%2 ;
    if (reminder==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }







}

