#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, D;
  float root1, root2;

  printf("Enter coefficients of x^2,x and constant terms : ");
  scanf("%d %d %d", &a, &b, &c);

  D = b*b - 4*a*c;

if(D<0){
    printf("Both roots are imaginary");
}
else if(D==0){
    printf("Both roots are equal");
    root1=-b/(2.0 * a);
    printf("\nRoot is %f ",root1);
}
else if(D>0)
{
   printf("\nRoots are real and distinct");
   root1=(-b+sqrt(D))/(2*a);
   root2=(-b-sqrt(D))/(2*a);
   printf("\nRoots are %f and %f",root1,root2);
}
else
    printf("Error");
}
