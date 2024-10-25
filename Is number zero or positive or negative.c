#include<stdio.h>
void main() 
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive");
    }
    else if(n==0)
    {
        printf ("zero");
    }
    else
    {
        printf("negative");
    }
}
