#include <stdio.h>
#include <math.h>
void main() 
{
    int a,b,c,d;
    float r1,r2;
    printf("enter values of a, b, c:");
    scanf ("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf ("real and distinct");
        r1= -b+sqrt(d)/(2*a);
        r2= -b-sqrt(d)/(2*a);
        printf ("\n the roots are : %f, %f",r1,r2);
    }
    else if(d<0)
    {
        printf ("real and imaginary");
    }
    else
    {
        printf ("real and equal");
        r1=r2=-b/(2*a);
        printf ("\n the roots are : %f, %f",r1,r2);
    }
}
