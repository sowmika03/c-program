#include <stdio.h>
#include <math.h>
int main() 
{
    int sum=0,rem,n,temp;
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum +(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is armstrong");
    }
    else
    {
        printf("%d is not an armstrong");
    }
    return 0;
}
