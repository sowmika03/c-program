#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+(i*i*i);
        }
    }
    printf("the sum is:%d",sum);
    return 0;
}
