#include<stdio.h>

int main()
{
    int subject1,subject2,subject3,subject4,subject5,sum;
    float avg;
    printf("Enter the mark of subject1: ");
    scanf("%d",&subject1);
    printf("Enter the mark of subject2: ");
    scanf("%d",&subject2);
    printf("Enter the mark of subject3: ");
    scanf("%d",&subject3);
    printf("Enter the mark of subject4: ");
    scanf("%d",&subject4);
    printf("Enter the mark of subject5: ");
    scanf("%d",&subject5);
    sum=subject1+subject2+subject3+subject4+subject5;
    printf("Total number of 5 subjects is: %d\n",sum);
    avg=(subject1+subject2+subject3+subject4+subject5)/5;
    printf("The average marks of 5 subjects is: %f\n",avg);
    return 0;



}
