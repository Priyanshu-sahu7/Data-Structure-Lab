                                          //  Program for traversing array elements.



#include<stdio.h>
void main()
{
    int a[5],n,i;
    printf("enter no. of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}