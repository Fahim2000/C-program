#include<stdio.h>
int main()
{
    float cm,meter,km;
    printf("Enter the value of length in cm: ");
    scanf("%f",&cm);
    meter=cm/100;
    km=cm/100000;
    printf("The value of length in meter=%fm\n",meter);
    printf("The value of length in km=%fkm",km);


    return 0;



}
