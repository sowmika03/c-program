#include<stdio.h>
int main()
{
    int a1,a2,n,d;
    scanf("%d%d%d",&n,&a1,&a2);
    d=a2-a1;
    printf("roll number is:%d",a1+(n-1)*d);
    return 0;
}
