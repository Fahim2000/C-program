#include<stdio.h>
int main()
{
    int num1,num2,sum,multiply,subtract,divide;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    multiply=num1*num2;
    subtract=num1-num2;
    divide=num1/num2;
    printf("Sum=%d\n",sum);
    printf("Multiplication=%d\n",multiply);
    printf("Difference=%d\n",subtract);
    printf("Division=%d\n",divide);


    return 0;
}
