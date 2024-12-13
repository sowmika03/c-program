#include <stdio.h>
int main() {
    int rev=0,rem,n;
    printf("enter n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("the reverse is %d",rev);
    return 0;
}
