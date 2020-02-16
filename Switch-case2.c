#include<stdio.h>
int main()
{
    char ch;
    printf("Enter M/m or F/f : ");

    scanf("%c",&ch);

    switch(ch)
    {
        case 'F':
        case 'f':

        printf("Female");
        break;

        case 'M':
        case 'm':
        printf("Male");

        break;

        default:
          printf("This input is invalid");


    }










    return 0;




}
