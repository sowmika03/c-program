#include <stdio.h>
int main() {
    int rev=0,rem,n,temp;
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is palindrome");
    }
    else
    {
        printf("%d is not palindrome");
    }
    return 0;
}
