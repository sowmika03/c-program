#include <stdio.h>
int main() {
    int sum=0,rem,n;
    printf("enter n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum %d",sum);
    return 0;
}
