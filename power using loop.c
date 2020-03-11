#include<stdio.h>
int main()
{
    int base,power,result=1,i;
    printf("\nEnter base and power:\n"  );
    scanf("%d %d",&base,&power);
    for(i=1;i<=power;i++)
        {
            result=result*base;

        }
printf("\n The result is : %d",result);



}
