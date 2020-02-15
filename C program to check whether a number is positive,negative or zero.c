#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("This number is positive");
    }
    else if(number<0)
    {
        printf("This number is negative");
    }
    else
    {
        printf("It is zero");
    }
    return 0;
}
