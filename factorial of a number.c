#include <stdio.h>
int main() 
{
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else 
    {
        for (i = 1; i <= n; ++i) 
        {
            fact *= i;
        }
        printf("Factorial of %d is %llu",n,fact);
    }
    return 0;
}
