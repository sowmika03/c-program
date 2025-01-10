#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n,i,j=0,k=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("the even array is:");
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    printf("the odd array is:");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
