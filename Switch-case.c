#include<stdio.h>
int main()
{
    int digit;
    printf("Enter any digit(0-4) : ");

    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;



    default:
        printf("This input is invalid");








    }



    return 0;

}
