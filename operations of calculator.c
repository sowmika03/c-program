#include <stdio.h>
int main()
{
int a, b;
char op;
printf ("enter the values of a, b and op :");
scanf("%d%d %c",&a,&b,&op);
switch (op)
{
    case '+': printf("the addition is %d ",a+b);
              break;
    case '-': printf("the subtraction is %d ",a-b);
              break;
    case '*': printf("the multiplication is %d ",a*b);
              break;
    case '/': printf("the division is %d ",a/b);
              break;
    case '%': printf("the modulo division is %d ",a%b);
              break;
    default: printf ("Invalid");
}
 return 0;
}
