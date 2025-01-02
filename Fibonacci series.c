#include <stdio.h>
int main() 
{
  int a= 0,b= 1,i,n,c;
  c=a+b;
  scanf("%d", &n);
  printf("Fibonacci Series:%d,%d,",a,b);
  for (i = 3; i <= n; ++i) 
  {
    printf("%d,",c);
    a=b;
    b=c;
    c=a+b;
  }
  return 0;
}
