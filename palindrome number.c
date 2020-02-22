#include<stdio.h>
int main()
{
    int num,n,rev,reminder;
    rev=0;
    printf("Enter number : ");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        reminder=num%10;
        rev=(rev*10)+reminder;
     num=num/10;
    }
    if(n==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}
